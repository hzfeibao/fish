#include "BackgroundLayer.h"
#include "StaticData.h"
USING_NS_CC;
bool BackgroundLayer::init()
{
	if(CCLayer::init()){
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		CCSprite* background = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("background"));
		background->setPosition(CCPointMake(winSize.width/2, winSize.height/2));
		return true;
	}
	return false;
}