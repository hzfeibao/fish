
#include "GameScene.h"
#include "StaticData.h"
#include "FishingJoyData.h"

USING_NS_CC;
/**
void GameScene::onEnterTransitionDidFinish()
{
    
}
*/

bool GameScene::init()
{
	if(CCScene::init()){
		_backgroundLayer = BackgroundLayer::create();

		return true;
	}
	return false;
}
