Twitter-Reverse-Auth
====================

Twitter Reverse Auth made easy with a single method!

Implement delegate methods to provide API token and secret.

CocoaPods available.

    ACAccount *account = // your account from ACAccountStore
    TwitterReverseAuth *auth = [[TwitterReverseAuth alloc] initWithDelegate:self];
    [auth requestCredentialsForAccount:account completion:^(NSDictionary *credentials, NSError *error) {
        if (credentials.count > 0) {
            NSLog(@"credential: %@", credentials);
        } else {
            NSLog(@"error: %@", error);
        }
    }];


