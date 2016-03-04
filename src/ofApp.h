#pragma once

#include "ofMain.h"

#include "ofxLeapMotion2.h"
#include "ofxTrueTypeFontUC.h"
//#include"Particle.hpp"


class ofApp : public ofBaseApp{
private:
    ofxTrueTypeFontUC font1,font2;
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    void exit();
    int main();
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
    ofEasyCam cam;
    
    vector<ofVec3f> fingerPos;
    vector<ofPoint> handPos;
    ofImage manbo;
    
    
    //    心拍数的演出
    ofSoundPlayer sound;
    int GetPrecision=1;
    float *volume;
    
    //    void audioIn(float *input,int bufferSize,int nChannels);
    //    vector<float> left;
    //    ofSoundStream soundstream;
    //
    //    int slide;
    //    int elapsedTime;
    //    int red,green,blue;
    //
    // 魚系
    int mode;
    ofImage end,same,neko,back,last;
    float imgX, imgY;
    
    float n,nn;
    float m;
    
    float  a,b;
    //    円のx,y座標
    float aa,bb;
    //    円のx,yのスピード
    bool  change;
    
    ofRectangle rectangle1,rectangle2;
};