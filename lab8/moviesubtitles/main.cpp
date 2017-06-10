//
// Created by miszk on 5/6/2017.
//

#include "MovieSubtitles.h"

int main () {

    moviesubs::SubRipSubtitles subs;
    //stringstream in {"1\n00:05:54,555 --> 00:05:56,722\nText\n\n2\n00:06:06,433 --> 00:06:07,801\nNEWLINE\n"};
    stringstream in {"1\n"
                             "00:20:41,150 --> 00:20:45,109\n"
                             "- How did he do that?\n"
                             "- Made him an offer he couldn't refuse.\n\n"};
    stringstream out;
    subs.ShiftAllSubtitlesBy(1500, 25, &in, &out);
    //cout<<in.str()<<endl;
    cout<<out.str()<<""<<endl;
    return 0;
}