//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<vector>	
//#include<string>	
//using namespace std;
//int main(void)
//{
//	string line;
//	vector<string> markdown;
//	while (getline(cin, line))
//	{
//		string newLine;
//		for (int i = 0; i < line.size();)//处理强调
//		{
//			if (line[i] == '_')
//			{
//				i++;
//				newLine.append("<em>");
//				while (line[i] != '_')
//				{
//					newLine.push_back(line[i]);
//					i++;
//				}
//				newLine.append("</em>");
//				i++;
//			}
//			else
//			{
//				newLine.push_back(line[i]);
//				i++;
//			}
//		}
//		newLine.swap(line); newLine.clear();
//		int begin, end;
//		begin = end = 0;
//		while (true)//处理超级链接
//		{
//			begin = line.find('[', end);
//			if (begin == -1) break;
//			newLine.append(line.substr(end, begin - end));
//			end = line.find(']', begin);
//			char buf[256];
//			string Link, Text;
//			Link = line.substr(begin + 1, end - begin - 1);
//			begin = end + 1; end = line.find(')',begin);
//			Text = line.substr(begin + 1, end - begin - 1);
//			sprintf(buf, "<a href=\"%s\">%s</a>", Text.c_str(), Link.c_str());
//			newLine.append(buf);
//			end++;
//		}
//		newLine.append(line.substr(end));
//		markdown.push_back(newLine);
//	}
//	vector<string> html;
//	for (int i = 0; i < markdown.size();)
//	{
//		if (markdown[i][0] == '#')//是标题
//		{
//			string text = "<h";
//			int index = markdown[i].find_first_not_of('#');
//			text.push_back(index + '0');
//			text.push_back('>');
//			text += markdown[i].substr(index + 1);
//			text += "</h"; text.push_back(index + '0'); text.push_back('>');
//			html.push_back(text);
//			i++;
//		}
//		else if (markdown[i][0] == '*')//是列表
//		{
//			html.push_back("<ul>");
//			while (true)
//			{
//				if (i == markdown.size() || markdown[i] == "") break;
//				int pos = markdown[i].find_first_not_of(' ', 1);
//				string text;
//				if(pos!=-1)
//					text = markdown[i].substr(pos);
//				html.push_back("<li>" + text + "</li>");
//				i++;
//			}
//			html.push_back("</ul>");
//		}
//		else if (markdown[i] == "") i++;//是空行
//		else//是段落
//		{
//			int first = 1;
//			while (true)
//			{
//				if (i == markdown.size() || markdown[i] == "") break;
//				if (first)
//				{
//					html.push_back("<p>" + markdown[i]);
//					first = 0;
//				}
//				else html.push_back(markdown[i]);
//				i++;
//			}
//			html.back().append("</p>");
//		}
//	}
//	for (int i = 0; i < html.size(); i++)
//	{
//		cout << html[i] << endl;
//	}
//	return 0;
//}