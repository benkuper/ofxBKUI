#include "ofxBKStyle.h"

void ofxBKStyle::init()
{
	printf("Init Style\n");
    normalFont.load("Yanone.ttf", 12);
    titleFont.load( "Yanone.ttf", 16);
    smallFont.load( "Yanone.ttf", 10);
    bigFont.load("Yanone.ttf", 32);
}


ofxBKTTFplus ofxBKStyle::normalFont;
ofxBKTTFplus ofxBKStyle::titleFont;
ofxBKTTFplus ofxBKStyle::smallFont;
ofxBKTTFplus ofxBKStyle::bigFont;


ofColor ofxBKStyle::bgColor        (30,30,30);
ofColor ofxBKStyle::normalColor    (50,50,50);
ofColor ofxBKStyle::darkColor      (40,40,40);
ofColor ofxBKStyle::semiLightColor (120,120,120);
ofColor ofxBKStyle::lightColor     (233, 233, 233);
ofColor ofxBKStyle::highlightColor (252, 194, 3);
ofColor ofxBKStyle::selectionColor (100,100,100);
ofColor ofxBKStyle::blue           (63, 160, 239);
ofColor ofxBKStyle::green          (170, 226, 74);
ofColor ofxBKStyle::red            (226, 80, 74);
ofColor ofxBKStyle::orange         (242, 141, 51);
ofColor ofxBKStyle::yellow         (255, 240, 29);

