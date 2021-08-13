# Uncomment the next line to define a global platform for your project
platform :ios, '9.0'

def required_pods
  pod 'PassiveDataKit', :git => 'https://github.com/audacious-software/PassiveDataKit-iOS.git'
end


target 'PassiveDataKit-iOS-HealthKit' do
  use_frameworks!
  
  required_pods

  target 'PassiveDataKit-iOS-HealthKitTests' do
    inherit! :search_paths
    use_frameworks!
    
    required_pods
  end
end

