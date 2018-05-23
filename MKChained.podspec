#
#  Be sure to run `pod spec lint MKChained.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|


  s.name         = "MKChained"
  s.version      = "0.0.1"
  s.summary      = "这是一个公共的链式语法类库你可以下载应用到你的系统中"

  s.description  = <<-DESC
This is a chain of grammar public libraries You can use to reduce their own code
                   DESC

  s.homepage     = "https://github.com/jxcz94754/MKChained"


  s.license      = "MIT"

  s.author             = { "Mark" => "1032325795@qq.com" }

  s.platform     = :ios, 9.0

  s.source       = { :git => "https://github.com/jxcz94754/MKChained.git", :tag => "0.0.1" }

  s.source_files  = "MKChainedFrameWork/*"

  s.frameworks = "Foundation"


  s.requires_arc = true

end
