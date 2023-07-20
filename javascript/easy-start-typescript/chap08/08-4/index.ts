enum Answer {
  Yes = 'Yes',
  No = 1,
}

enum Authorization {
  User,                      // 0
  Admin,                     // 1
  SuperAdmin = User + Admin, // 1
  God = 'abc'.length,        // 3
}
