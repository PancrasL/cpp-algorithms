//#include "TextQuery.h"
//TextQuery::TextQuery(ifstream &is)
//{
//	string text;
//	while (getline(is,text)) {
//		file->push_back(text);
//		int n = file->size() - 1;
//		istringstream line(text);
//		string word;
//		while (line >> word) {
//			auto &lines = wm[word];
//			if (!lines)
//				lines.reset(new set<line_no>);
//			lines->insert(n);
//		}
//	}
//}
//
//TextQuery::~TextQuery()
//{
//}
