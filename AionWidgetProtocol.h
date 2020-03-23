@protocol AionWidgetProtocol <NSObject>

@required
@property (nonatomic, assign) BOOL isActivePage;
-(void)setupWithFrame:(CGRect) frame;
-(UIView*)contentView;

@optional
-(void)didAppear;
-(void)didScrollToView;
-(void)didScrollAwayFromView;
-(void)AionViewDidHide:(BOOL)hidden;
-(void)viewDidDisappear;
-(void)viewDidAppear;
@end