//
// Created by Ignacy on 3/14/2017.
//


#include "TinyUrl.h"

namespace tinyurl {

    void NextHash(std::array<char, 6> *state) {
        unsigned long i = 5;
        unsigned long index;
        std::string alfa = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        //operator[]( 1 );
        if (state->at(i) == 'z') {
            while (state->at(i) == 'z') {
                state->at(i) = '0';
                i--;
            }
            index = alfa.find(state->at(i));
            state->at(i) = alfa.at(index + 1);
        } else {

            index = alfa.find(state->at(i));
            state->at(i) = alfa.at(index + 1);
        }
        std::cout << std::endl << state->begin();
    }


std::unique_ptr<TinyUrlCodec> Init()
{
    std::unique_ptr<TinyUrlCodec> pointer = std::make_unique<TinyUrlCodec>();
    pointer->arr = {'0','0','0','0','0','0'};
    std::cout<<pointer->arr.begin()<<std::endl;
    return pointer;
}

std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec)
{
    std::cout<<" encode "<<std::endl;
    std::string gowno = url, jajco;
    bool flag = false;
    for (int i = 0; i<gowno.length();i++){
        if(gowno[i]==':')
        {
            flag = true;
            i+=3;
        }
        if(flag)
        {
            jajco+=gowno[i];
        }
    }
    jajco+="/";

    std::cout<<codec;
    std::cout<<std::endl<<jajco<<std::endl;
    return jajco;

}
}
/* all url should be encoded uniquely
   unique_ptr<TinyUrlCodec> codec = tinyurl::Init();
  map<string, string> hashes;
  for (auto url : tinyUrlBunchOfUrlsTestData) {
    const auto hash = tinyurl::Encode(url, &codec);
    auto i = hashes.find(hash);
    if (i != hashes.end()) {
      EXPECT_NE(url, i->second)
                << "URL: " << url << " conflicts with URL: " << i->second << " (Both have hash: " << hash << ")";
    } else {
      hashes.emplace_hint(i, hash, url);
    }

 */