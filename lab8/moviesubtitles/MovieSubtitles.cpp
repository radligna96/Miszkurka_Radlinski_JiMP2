//
// Created by miszk on 5/6/2017.
//

#include "MovieSubtitles.h"

void moviesubs::SubRipSubtitles::ShiftAllSubtitlesBy(int delay, int fps, stringstream *in, stringstream *out) {
//{R"((\d{2}):(\d{2}):(\d{2}),(\d{3}) --> (\d{2}):(\d{2}):(\d{2}),(\d{3}))"};
    string in_string = (*in).str();
    regex pattern {R"((\d{2}):(\d{2}):(\d{2}),(\d{3}) --> (\d{2}):(\d{2}):(\d{2}),(\d{3}))"};
    smatch matches;


    while(getline(*in,in_string,'\n')) {
        if (std::regex_search(in_string, matches, pattern)) {
            //cout<<matches[0] << " matches[0] to caly match" <<endl;//<<endl<<matches[1]<<endl<<matches[2]<<endl<<matches[3]<<endl<<matches[4]<<endl<<matches[5]<<endl<<matches[6]<<endl<<matches[7]<<endl<<matches[8]<<endl;

            *out << matches[1] << ":" << matches[2] << ":";
            string match_4_str = matches[4].str();
            int match_4_str_int = stoi(matches[4].str()) + delay;
            int match_3_str_int = stoi(matches[3])+match_4_str_int/1000;
            string match_3_str = to_string(match_3_str_int);

            if(match_4_str_int<1000)
            {
                while(match_4_str.size()<3)
                    match_4_str='0'+match_4_str;
                while(match_3_str.size()<2)
                    match_3_str='0'+match_3_str;
                (*out)<< match_3_str << "," << match_4_str << " --> ";
            }
            else{
                match_3_str_int = stoi(matches[3])+match_4_str_int/1000;
                match_4_str_int %= 1000;
                match_4_str = to_string(match_4_str_int);
                match_3_str = to_string(match_3_str_int);

                while(match_4_str.size()<3)
                    match_4_str='0'+match_4_str;
                while(match_3_str.size()<2)
                    match_3_str='0'+match_3_str;
                (*out)<< match_3_str << "," << match_4_str << '\n';
            }

            *out << matches[5] << ":" << matches[6] << ":";
            string match_8_str = matches[8].str();
            int match_8_str_int = stoi(matches[8].str()) + delay;
            int match_7_str_int = stoi(matches[7])+match_8_str_int/1000;
            string match_7_str = to_string(match_7_str_int);

            if(match_8_str_int<1000)
            {
                while(match_8_str.size() < 3)
                    match_8_str = '0' + match_8_str;
                while(match_7_str.size() < 2)
                    match_7_str = '0' + match_7_str;
                (*out)<< match_8_str << "," << match_8_str << " --> ";
            }
            else{
                match_7_str_int = stoi(matches[7])+match_8_str_int/1000;
                match_8_str_int %= 1000;
                match_8_str = to_string(match_8_str_int);
                match_7_str = to_string(match_7_str_int);

                while(match_8_str.size() < 3)
                    match_8_str = '0' + match_8_str;
                while(match_3_str.size() < 2)
                    match_7_str = '0' + match_7_str;
                (*out)<< match_7_str << "," << match_7_str << '\n';
            }
            //*out << match_3_str_int << ":" << match_4_str_int << ":";
        }
    }

}

void moviesubs::MicroDvdSubtitles::ShiftAllSubtitlesBy(int delay, int fps, stringstream *in, stringstream *out) {
    string in_string = (*in).str();
    regex pattern {R"(\{(\d+)\}\{(\d+)\}(.*))"};
    smatch matches;


    while(getline(*in,in_string,'\n')) {
        if (std::regex_search(in_string, matches, pattern)) {
            int start = stoi(matches[1]) + (delay * fps / 1000);
            int end = stoi(matches[2]) + (delay * fps / 1000);
            *out << "{" << start << "}";
            *out << "{" << end << "}";
            *out << matches[3] << "\n";
        }
    }

}
