//
// Created by miszk on 5/6/2017.
//

#ifndef JIMP_EXERCISES_MOVIESUBTITLES_H
#define JIMP_EXERCISES_MOVIESUBTITLES_H

#include <string>
#include <iostream>
#include <memory>
#include <sstream>
#include <regex>

using std::cout;
using std::string;
using std::endl;
using std::unique_ptr;
using std::stringstream;
using std::regex;
using std::smatch;
using std::to_string;

namespace moviesubs {

    class MovieSubtitles {
    public:
        virtual void ShiftAllSubtitlesBy(int delay, int fps, stringstream *in, stringstream *out) = 0 ;

    };


    class SubRipSubtitles : public MovieSubtitles {
    public:
        void ShiftAllSubtitlesBy(int delay, int fps, stringstream *in, stringstream *out);

    };

    class MicroDvdSubtitles : public MovieSubtitles {
    public:
        void ShiftAllSubtitlesBy(int delay, int fps, stringstream *in, stringstream *out);

    };

}

#endif //JIMP_EXERCISES_MOVIESUBTITLES_H
