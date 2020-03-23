@protocol AionWidgetProtocol <NSObject>

@required
@property (nonatomic, assign) BOOL isActivePage; // Set when this widget is on the current Aion page
-(void)setupWithFrame:(CGRect) frame; // Where you setup the content view
-(UIView*)contentView; // The view to be added to the aion page

@optional
-(void)didScrollToView; // Did scroll to widget page
-(void)didScrollAwayFromView; // Did scroll away from widget page
-(void)AionViewDidHide:(BOOL)hidden; // Aion did hide
-(void)viewDidDisappear; // Widget page did disappear by scroll or Aion being dismissed
-(void)viewDidAppear; // Widget page did appear by scroll or Aion being invoked
@end