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
        //std::cout << std::endl << state->begin();
    }


std::unique_ptr<TinyUrlCodec> Init()
{
    std::unique_ptr<TinyUrlCodec> object = std::make_unique<TinyUrlCodec>();
    object->hash = {'0','0','0','0','0','0'};
    return object;
}

std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec)
{

    string str;
    for (auto letter_in_hash: codec->get()->hash)
        str += letter_in_hash;

    codec->get()->bitch.emplace(str, url);
    NextHash(&codec->get()->hash);
    return str;

}
    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash)
    {
        string url;
        auto i = codec->bitch.find(hash);
        url = i->second;
        return url;
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