# Apple-XCFramework-KochavaConsent

[![Releases](https://img.shields.io/github/v/release/kochava/Apple-XCFramework-KochavaConsent?include_prereleases&sort=semver)](https://github.com/Kochava/Apple-XCFramework-KochavaConsent/releases)

<img src="https://storage.googleapis.com/kochava-web/2016/07/Kochava-horizontal-black-800x154.png" width="260" />

## KochavaConsent

The KochavaConsent module is an optional module within the Kochava SDK providing management of user consent.  This includes support for CCPA and GDPR.

The Kochava SDK is a lightweight and easy to integrate SDK written in Objective-C and Swift, providing first-class integration with Kochava’s industry leading mobile attribution and analytics platform.

## Built on

* Xcode 12.4

## Platforms

* iOS 10.3
* macOS 10.14
* tvOS 10.2
* watchOS 3.2

For a typical Kochava Consent integration, you need only include the Core and Consent modules. Other modules may be added depending on your needs.

## Dependencies

* [KochavaCore](https://github.com/Kochava/Apple-XCFramework-KochavaCore) [![Download](https://img.shields.io/github/v/release/kochava/Apple-XCFramework-KochavaCore?include_prereleases&sort=semver)](https://github.com/Kochava/Apple-XCFramework-KochavaCore/releases)
* [KochavaUI](https://github.com/Kochava/Apple-XCFramework-KochavaUI) [![Download](https://img.shields.io/github/v/release/kochava/Apple-XCFramework-KochavaUI?include_prereleases&sort=semver)](https://github.com/Kochava/Apple-XCFramework-KochavaUI/releases)

## Integration

[Kochava Apple SDK Integration](https://support.kochava.com/sdk-integration/sdk-kochavatracker-ios)

## Author

Kochava, support@kochava.com

## License

KochavaConsent is available under the [Kochava Terms of Service](https://www.kochava.com/terms-of-service/).


## Default Branch

As of October 1, 2020, github.com uses the branch name ‘main’ when creating the initial default branch for all new repositories.  In order to minimize any customizations in our github usage and to support consistent naming conventions, we have made the decision to rename the ‘master’ branch to be called ‘main’ in all Kochava’s github repos.

For local copies of the repo, the following steps will update to the new default branch:

```
git branch -m master main
git fetch origin
git branch -u origin/main main
git remote set-head origin -a
```
