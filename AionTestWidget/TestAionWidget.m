#import "TestAionWidget.h"

@interface TestAionWidget()
{
}
@end

@implementation TestAionWidget
    -(void)setupWithFrame:(CGRect) frame
    {
        NSLog(@"[Aion] setupWithFrame");

        if(self.contentView == NULL)
        {
            self.contentView = [[UIView alloc] initWithFrame: frame];
        }

        [self.contentView setFrame: frame];
        self.contentView.backgroundColor = [UIColor redColor];
    }

    -(void)viewDidAppear
    {
        NSLog(@"[TestAionWidget] viewDidAppear");
    }

    -(void)viewDidDisappear
    {
        NSLog(@"[TestAionWidget] viewDidDisappear");
    }
@end