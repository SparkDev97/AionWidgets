# AionWidgets

I've tried to make creating your own AionWidgets as simple as possible. Widgets are displayed as individual pages before the app switcher. You can see examples of widgets built into Aion (Music, Favourites, Siri).

## Get Started with Aion Widgets
If you have any experience with objective-c/tweak development, it's super easy to get started with AionWidgets. Let's get going!

#### Pre-Requirements
```
Aion (Available from: https://sparkdev.me)
```

### Simple Implementation

Included in this git is a 'AionTestWidget' which contains a fully compatible template of a simple AionWidget.

The template simply displays a red box on the screen, so take a look at this. For the easiest experience, build your widgets starting from this template.

AionWidgets must conform to the 'AionWidgetProtocol'. This is included in the 'AionWidgetProtocol.h' API header file.

```
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
```

A quick example of a class that would conform to this protocol would be as follows:
```
@interface TestAionWidget : NSObject <AionWidgetProtocol>
@property (nonatomic, retain) UIView* contentView;
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
```

Once you have a class that conforms to the AionWidgets protocol, you need an Info.plist file to tell Aion about your widget.
This is formatted like so:

```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
    <dict>
        <key>CFBundleIdentifier</key>
        <string>com.spark.Aionwidgets.test</string>

        <key>CFBundleDisplayName</key>
        <string>Test Aion Widget</string>
       
        <key>AionWidgetClass</key>
        <string>TestAionWidget</string>
        
        <key>AionWidgetsVersion</key>
        <integer>1</integer>
    </dict>
</plist>
```

This Info.plist file but be in your bundle alongside the binary, so see the 'Makefile' in the template if you do not know how to copy this over.
Your widget bundle file must then be placed in **"/Library/Aion/Widgets"** for Aion to find it, this is also covered in the 'Makefile'.

Once your Widget is built and has the Info.plist file, it will be available in the Aion Widgets manager and you're done!

## Authors
SparkDev 2020

## License
All example code is under the MIT License