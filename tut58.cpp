// Abstract Base Class & Pure Virtual Functions
#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do-n cothing function --> Pure Virtual Function
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "Ths is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "Ths is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of word in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    // char *title = new char[30];
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for Code With Harry Text
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
