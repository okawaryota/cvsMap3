#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofEnableDepthTest();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    csv.loadFile(ofToDataPath("dem.csv"));
    
    cam.setDistance(100);

    cout <<csv.numRows << endl;
    
    // メッシュの幅と高さ
    w = 256;
    h = 256;
    
    // 頂点の色を初期化
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            top = csv.getFloat(j,i);
            mesh.addColor(ofFloatColor(0.5, 0.8, 1.0));
            mesh.addVertex(ofVec3f(i - w/2, j - h/2, top*20));
            
        }
    }
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
//    mesh.clearVertices();
//    for (int i = 0; i < w; i++) {
//        for (int j = 0; j < h; j++) {
//            top = csv.getFloat(j,i);
//            //cout << top << endl;
//            mesh.addVertex(ofVec3f(i - w/2, j - h/2, top));
//        }
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    // メッシュの描画
    ofSetHexColor(0xffffff);
    cam.begin(); // カメラ開始
    
    // 頂点の位置をドットで表示
    glPointSize(2.0);
    //glEnable(GL_POINT_SMOOTH);
    glEnable(GL_LINE_SMOOTH);
   // mesh.drawVertices();
    //mesh.drawWireframe();
    mesh.drawFaces();
    
    cam.end(); // カメラ終了
    
    // ログの表示
    string info;
    info = "Vertex num = " + ofToString(w * h, 0) + "\n";
    info += "FPS = " + ofToString(ofGetFrameRate(), 2);
    ofDrawBitmapString(info, 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
