#import "../AionWidgetProtocol.h"

@interface TestAionWidget : NSObject <AionWidgetProtocol>

@property (nonatomic, retain) UIView* contentView;
@property (nonatomic, assign) BOOL isActivePage;

@end