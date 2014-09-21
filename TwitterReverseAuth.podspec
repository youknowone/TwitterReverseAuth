Pod::Spec.new do |s|
  s.name         = "TwitterReverseAuth"
  s.version      = "1.0"
  s.summary      = "TwitterReverseAuth toolkit."
  s.homepage     = "https://github.com/youknowone/TwitterReverseAuth"
  s.license      = "MIT License"
  s.author       = { "Kyle Begeman" => "kylebegeman@gmail.com" }
  s.source       = { :git => "https://github.com/youknowone/TwitterReverseAuth.git", :tag => "1.0" }
  s.platform     = :ios, '6.0'
  s.header_dir   = "TwitterReverseAuth"
  s.source_files = "TwitterReverseAuth/*.h", "TwitterReverseAuth/*.m"
  s.public_header_files = "TwitterReverseAuth/*.h"
  s.requires_arc = true
  s.dependency 'AFNetworking', '~> 1.3.4'
  s.dependency 'STLOAuth'
end
