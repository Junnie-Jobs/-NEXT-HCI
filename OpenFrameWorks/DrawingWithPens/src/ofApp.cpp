#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

 position.clear();
    color.clear();
    
    drawButton.setup(ofRectangle(0,0,100,100),ofColor(81,167,249), "pen1");
    clearButton.setup(ofRectangle(100,0,100,100),ofColor(112,191,65), "clear");
    lineButton.setup(ofRectangle(200,0,100,100),ofColor(179,106,226), "line");
    noiseLineButton.setup(ofRectangle(300,0,100,100),ofColor(243,144,25), "noiseLine");
    autoLineButton.setup(ofRectangle(400,0,100,100),ofColor(245,211,40), "autoLine");

    penRectangle = new PenRectangle();
    penRectangle->setup();
    
    lineRectangle = new LineRectangle();
    lineRectangle->setup();
    
    noiseLineRectangle = new NoiseLineRectangle();
    noiseLineRectangle->setup();
    
    autoLineRectangle = new AutoLineRectangle();
    autoLineRectangle->setup();
    
    bDrawButton = false;
    bClearButton = false;
    bLineButton = false;
    bNoiseLineButton = false;
    bAutoLineButton = false;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofBackground(0, 0, 0);
    
    drawButton.draw();
    clearButton.draw();
    lineButton.draw();
    noiseLineButton.draw();
    autoLineButton.draw();
    
    if (bDrawButton) {
        penRectangle->draw();
    }
    
    if(bLineButton){
        lineRectangle->draw();
        lineRectangle->drawLines();
    }
    
    if(bNoiseLineButton){
        noiseLineRectangle->draw();
        noiseLineRectangle->line.draw();
    }
    
    if(bAutoLineButton){
        autoLineRectangle->draw();
        autoLineRectangle->autoDraw();
    }
    
   
}

//지우기 모드 : 지우기 모드는 그리기 부분의 변화가 아니고 데이터의 변화이므로 update()함수에 구현한다.
void ofApp::update() {
        
    if(bNoiseLineButton){
        noiseLineRectangle->update();
    }
    
    if(bAutoLineButton){
        autoLineRectangle->update();
    }

    if (bClearButton) {
        penRectangle->clear();
        lineRectangle->clear();
        noiseLineRectangle->clear();
        position.clear();
        color.clear();
        bClearButton = false;
    }
    

}


//----------------------------------

void ofApp::keyPressed(int key){}
void ofApp::keyReleased(int key){}
void ofApp::mouseMoved(int x, int y ){}

//그리기 모드
void ofApp::mouseDragged(int x, int y, int button){
    
    if (bDrawButton) {
    penRectangle->add(ofRectangle(x,y,ofRandom(30,50),ofRandom(30,50)),
                      ofColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255)));
    }
    
    if(bLineButton){
        lineRectangle->drawingBranchs(x,y);
    }
    
    if(bNoiseLineButton){
        noiseLineRectangle->add(x,y);
    }
}

void ofApp::mousePressed(int x, int y, int button){
    if (drawButton.inside(x, y)) {
        cout << "draw button" << endl;
        bDrawButton = true;
        bClearButton = false;
        bLineButton = false;
        bNoiseLineButton = false;
    }
    if (clearButton.inside(x, y)) {
        cout << "clear button" << endl;
        bClearButton = true;
        bDrawButton = false;
        bLineButton = false;
        bNoiseLineButton = false;
        bAutoLineButton = false;
    }
    
    if (lineButton.inside(x,y)){
    
        cout << "line button" << endl;
        bLineButton = true;
        bClearButton = false;
        bDrawButton = false;
        bNoiseLineButton = false;
        bAutoLineButton = false;
    }
    
    if(noiseLineButton.inside(x,y)){
    
        cout << "noiseLine button" << endl;
        bNoiseLineButton = true;
        bClearButton = false;
        bDrawButton = false;
        bLineButton = false;
        bAutoLineButton = false;
    }
    
    if(autoLineButton.inside(x,y)){
    
        cout << "autoLine button" << endl;
        bAutoLineButton = true;
        bNoiseLineButton = false;
        bClearButton = false;
        bDrawButton = false;
        bLineButton = false;

    
    }
}

void ofApp::mouseReleased(int x, int y, int button){
    drawButton.inside(x, y);
    clearButton.inside(x, y);
    lineButton.inside(x, y);
    noiseLineButton.inside(x,y);
    autoLineButton.inside(x, y);
}
void ofApp::mouseEntered(int x, int y){}
void ofApp::mouseExited(int x, int y){}
void ofApp::windowResized(int w, int h){}
void ofApp::dragEvent(ofDragInfo dragInfo){}
void ofApp::gotMessage(ofMessage msg){}


