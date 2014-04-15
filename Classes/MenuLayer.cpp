
#include "MenuLayer.h"
#include "GameScene.h"
USING_NS_CC;
bool MenuLayer::init()
{
    if(CCLayer::init()){
	this->createBackground();
	this->createMenu();
	return true;
    }
    return false;
}

void MenuLayer::createBackGround()
{
    CCLayerColor* colorBackground = CCLayerColor::create(ccc4(0,0,0,128));
    this->addChild(colorBackground);
}

void Menulayer::createMenu()
{
    int fontSize = 32;
    CCString* fontName = CCString::create("Thonburi");

    CCMenuItemLabel* resume = CCMenuItemLabel::create(CCLabelTTF::create("Resume"), fontName->getCString(), fontSize), this, menu_selector(MenuLayer::resume));
    
    CCMenuItemLabel* mainMenu = CCMenuItemLabel::create(CCLabelTTF::create("Main Menu"), fontName->getCString(), fontSize), this, menu_selector(MenuLayer::mainMenu));

    CCMenuItemLabel* soundOn = CCMenuItemLabel::create(CCLabelTTF::create("Sound On"), fontName->getCString(), fontSize));

    CCMenuItemLabel* soundOff = CCMenuItemLabel::create(CCLabelTTF::create("Sound Off"), fontName->getCString(), fontSize));

    CCMenuItemLabel* musicOn = CCMenuItemLabel::create(CCLabelTTF::create("Music On"), fontName->getCString(), fontSize));

    CCMenuItemLabel* musicOff = CCMenuItemLabel::create(CCLabelTTF::create("Music Off"), fontName->getCString(), fontSize));

    _music = CCMenuItemToggle::createWithTarget(this, menu_selector(MenuLayer::music), musicOff, musicOn, null);

    CCMenuItemLabel* reset = CCMenuItemLabel::create(CCLabelTTF::create("Reset", fontName->getCString(), fontSize), this, menu_selector(MenuLayer::reset));

    CCMenu* menu = CCMenu::create(resume, mainMenu, _sound, _music, reset, NULL);
    menu->alignItemsVerticallyWithPadding(10);
    this->addChild(menu);
}

void MenuLayer::resume(cocos2d::CCObject* pSender)
{
    GameScene* gameScene = (GameScene*)this->getParent();
    gameScene->resume();
}

void MenuLayer::mainMenu(cocos2d::CCObject* pSender)
{
    GameScene* gameScene = (GameScene*)this->getParent();
    gameScene->transToMainMenu();
}

