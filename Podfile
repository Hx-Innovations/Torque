platform :ios, '13.0'

target 'Torque' do
    use_frameworks!
    pod 'WearnotchSDK', :podspec => "https://s3.amazonaws.com/wearnotch-media/public/iOS-Releases/1.9.0.1.json"
    pod "MLVerticalProgressView"
    pod 'Charts'
    pod 'GoogleSignIn'
    pod 'Firebase/Firestore'
    pod 'Firebase/Auth'
    pod 'FirebaseUI'
    pod 'Firebase/Storage'

# Remove the static WearnotchSDK libraries from the app target in order to avoid duplicated static library copy
post_install do |installer|
  installer.pods_project.targets.each do |target|
    # Remove only from the main app target
    # IMPORTANT: Insert target name here
    if target.name == "Pods-{Torque}"
      puts "Updating #{target.name} OTHER_LDFLAGS"
      target.build_configurations.each do |config|
        xcconfig_path = config.base_configuration_reference.real_path

        # read from xcconfig to build_settings dictionary
        build_settings = Hash[*File.read(xcconfig_path).lines.map{|x| x.split(/\s*=\s*/, 2)}.flatten]

        # modify OTHER_LDFLAGS
        build_settings['OTHER_LDFLAGS']['-framework "JRE"'] =  ""
        build_settings['OTHER_LDFLAGS']['-framework "JSR305"'] = ""
        build_settings['OTHER_LDFLAGS']['-framework "WearnotchSDK"'] = ""

        # write build_settings dictionary to xcconfig
        File.open(xcconfig_path, "w")
        build_settings.each do |key,value|
          File.open(xcconfig_path, "a") {|file| file.write("#{key} = #{value}")}
        end
      end
    end
  end
end


end
