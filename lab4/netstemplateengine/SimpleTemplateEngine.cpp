//
// Created by miszk on 3/23/2017.
//


#include "SimpleTemplateEngine.h"

namespace nets{

    View::View(string sheet)
{
    this->sheet=sheet;
}

string View::Render(const std::unordered_map <string, string> &model) const
{
    regex pattern {R"(\{\{\w+\}\})"};
    string line = sheet;
    string rendered="";
    smatch matches;

    while (std::regex_search (line,matches, pattern)) {
        for (auto match: matches)
        {
            string x = match.str();
            rendered += matches.prefix().str();
            string f_map = x.substr(2,x.length()-4);
            if (model.find(f_map)!=model.end())
            {
                rendered += model.at(f_map);
            }

            //rendered += (rendered.substr(0,index) + rendered.substr(index+length,line.length()));
        }
        line = matches.suffix().str();
    }
    rendered += line;
    return rendered;
}


}
