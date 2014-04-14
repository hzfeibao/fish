#include "Fish.h"
#include "StaticData.h"
USING_NS_CC;
enum{
	k_Action_Animate = 0,
};
Fish* Fish::create(FishType type)
{
	Fish* fish = new Fish();
	fish->init(type);
	fish->autorelease();
	return false;
}

bool Fish::init(FishType type)
{
	_type = type;//???
	CCString* animationName = CCString::createWithFormat(STATIC_DATA_STRING("fish_animation"), _type);
	CCAnimation* fishAnimation = CCAnimationCache::sharedAnimationCache()->animationByName(animationName->getCString());
	CCAnimate* fishAnimate = CCAnimate::create(fishAnimation);
	fishAnimate->setTag(k_Action_Animate);
	_fishSprite = CCSprite::create();
	this->addChild(_fishSprite);
	_fishSprite->runAction(CCRepeatForever::create(fishAnimate));//???
	return true;
}
