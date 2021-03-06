
#include <boost\property_tree\info_parser.hpp>
#include <boost\property_tree\ptree.hpp>
#include <boost\property_tree\json_parser.hpp>
#include <boost\range\algorithm\merge.hpp>
#include <boost\foreach.hpp>

#include <queue>

//#include <boost\concept_check.hpp>
//#include <boost\range\begin.hpp>
//#include <boost\range\end.hpp>
//#include <boost\range\concepts.hpp>

#include <iostream>

void MySort(std::string inFileName, std::string outFileName)
{
	using namespace boost::property_tree;

	ptree root;

	read_json(inFileName, root);

	root.sort();

	write_json(outFileName, root);
}

void MyDiff(std::string firstFileName, std::string secondFileName)
{
	//using namespace boost::property_tree;

	//ptree root;
	//read_json(firstFileName, root);
	//ptree root2;
	//read_json(secondFileName, root2);
	//ptree merged;
	//boost::range::merge(root, root2, std::back_inserter(merged));
	//write_json("OUTj.json", merged);
}

void ReadAll(std::string FileName, const int gen = 0)
{
	using namespace boost::property_tree;
	ptree props;

	for (ptree::iterator iter = props.begin(); iter != props.end(); iter++)
	{
		std::cout << iter->first << "," << iter->second.data() << "." << std::endl;
		if (iter->second.data() == "")
		{
			iter->second.begin();
			/*for (ptree::iterator iter2 = iter->second.begin(); iter2 != iter->second.end(); iter2++)
			{
				std::cout << "	" << iter2->first << "," << iter2->second.data() << "." << std::endl;
			}*/
		}
	}
}

using namespace boost;
//boost::property_tree::ptree f;
property_tree::ptree mergePropertyTrees(const boost::property_tree::ptree& rptFirst, const boost::property_tree::ptree& rptSecond)
{
	// Take over first property tree
	boost::property_tree::ptree ptMerged = rptFirst;

	// Keep track of keys and values (subtrees) in second property tree
	
	std::queue<std::string> qKeys;
	std::queue<boost::property_tree::ptree> qValues;
	qValues.push(rptSecond);

	// Iterate over second property tree
	while (!qValues.empty())
	{
		// Setup keys and corresponding values
		boost::property_tree::ptree ptree = qValues.front();
		qValues.pop();
		std::string keychain = "";
		if (!qKeys.empty())
		{
			keychain = qKeys.front();
			qKeys.pop();
		}

		// Iterate over keys level-wise
		BOOST_FOREACH(const boost::property_tree::ptree::value_type& child, ptree)
		{
			// Leaf
			if (child.second.size() == 0)
			{
				// No "." for first level entries
				std::string s;
				if (keychain != "")
					s = keychain + "." + child.first.data();
				else
					s = child.first.data();

				// Put into combined property tree
				ptMerged.put(s, child.second.data());
			}
			// Subtree
			else
			{
				// Put keys (identifiers of subtrees) and all of its parents (where present)
				// aside for later iteration. Keys on first level have no parents
				if (keychain != "")
					qKeys.push(keychain + "." + child.first.data());
				else
					qKeys.push(child.first.data());

				// Put values (the subtrees) aside, too
				qValues.push(child.second);
			}
		}  // -- End of BOOST_FOREACH
	}  // --- End of while

	return ptMerged;
}

int main()
{
	using namespace boost::property_tree;
	using namespace std;

	//ptree root;

	//read_json("json1.txt", root);

	//root.sort();

	//write_json("OUTjson1.txt", root);

	//cout << root.get<std::string>("device number") << endl;

	//MySort("json2.txt", "OUTjson2.txt");

	
	//MyDiff("json1.txt", "json2.txt");

	//ptree props;
	//read_json("j1.json", props);
	////for (std::string key : props.data)
	//{
	//	cout << props << endl;
	//}


	//for (const std::string &key : propsRange(props)) {
	//	std::cout << key << " = " << props.get<std::string>(key) << '\n';
	//}

	//ptree props;
	//read_json("OUTjson1.txt", props);
	
	ptree props;
	read_json("json1.txt", props);
	ptree props2;
	read_json("json2.txt", props2);
	ptree propsOUT = mergePropertyTrees(props, props2);
	try
	{
		write_json("OUTjson.txt", propsOUT);
	}
	catch (boost::property_tree::json_parser::json_parser_error &je)
	{
		std::cout << "Error parsing: " << je.filename() << " on line: " << je.line() << std::endl;
		std::cout << je.message() << std::endl;
	}

	//ptree root;
	//read_json("json2.txt", root);
	//root.sort();
	//write_json("OUTjson2.txt", root);

    std::cout << "End World!\n";
	getchar();
	return 0;
}