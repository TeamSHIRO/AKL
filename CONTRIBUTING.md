# Contributing

We welcome contributions from the community!

AKL is a community-driven project, and we actively welcome contributions. Your involvement is essential to our success.

Whether you're fixing a bug, adding a new feature, or improving documentation, your help is appreciated. Here are some guidelines to get you started:

## Table of Contents

- [Terminology](#terminology)
- [Code of Conduct](#code-of-conduct)
- [Contributing Guide 101](#contributing-guide-101)
  - [Overview](#overview)
    - [Internal Contributors (!SHIRO Members)](#internal-contributors-shiro-members)
    - [External Contributors](#external-contributors)
  - [Developer Certificate of Origin](#developer-certificate-of-origin)
  - [Style Guide](#style-guide)

## Terminology

* **Contributor:** Anyone who submits a pull request to the project.
* **Internal Contributor:** A member of the !SHIRO GitHub organization who has the privilege to directly work on the 
  repository.
* **External Contributor:** A contributor who is not part of the !SHIRO GitHub organization.
* **Maintainer:** A member of the !SHIRO GitHub organization who has the privilege to merge pull requests.
* **Source file:** A file that contains source code, Including headers. This includes but not limited to files with the
  following extensions: `.hpp`, `.cpp`, `.h`, `.c`. Build scripts or Shell scripts or any configuration files are **not** considered source files
  (e.g., `CMakeLists.txt`, `something.cmake`, `do_something.sh`, `README.md`).

## Code of Conduct

Please note that this project is released with a [**Contributor Code of Conduct**](CODE_OF_CONDUCT.md). By participating in
this project, you agree to abide by its terms.


## Contributing Guide 101

If you're ready to dive into the codebase and submit new features or bug fixes, this section is for you.

### Overview

Git tags without prefix `tag-` is protected and can't be created or changed without a required permission.

#### Internal Contributors (!SHIRO Members)
If you’re part of the !SHIRO GitHub organization and have the privilege to do so, you can work directly on the
repository:
1. Create a new branch from `develop`.
2. Implement your feature or fix in a feature/* branch.
3. Open a Pull Request (PR) back into `develop`.
4. Request a review from another team member before merging.

#### External Contributors
If you’re not part of !SHIRO, we still welcome your contributions!
1. Fork the repository to your own account.
2. Create a new branch in your fork (feature/*).
3. Commit and push your changes.
4. Open a Pull Request from your fork’s branch into the main repo’s `develop` branch.
5. A maintainer will review your changes and provide feedback.

---

### Developer Certificate of Origin
By contributing to this project, you agree that your contributions will be licensed under the project's license and that
you have the right to make those contributions. Please ensure you sign the Developer Certificate of Origin (DCO) by
adding a "Signed-off-by" line to your commit messages.

```
Developer Certificate of Origin
Version 1.1

Copyright (C) 2004, 2006 The Linux Foundation and its contributors.
1 Letterman Drive
Suite D4700
San Francisco, CA, 94129

Everyone is permitted to copy and distribute verbatim copies of this
license document, but changing it is not allowed.


Developer's Certificate of Origin 1.1

By making a contribution to this project, I certify that:

(a) The contribution was created in whole or in part by me and I
    have the right to submit it under the open source license
    indicated in the file; or

(b) The contribution is based upon previous work that, to the best
    of my knowledge, is covered under an appropriate open source
    license and I have the right under that license to submit that
    work with modifications, whether created in whole or in part
    by me, under the same open source license (unless I am
    permitted to submit under a different license), as indicated
    in the file; or

(c) The contribution was provided directly to me by some other
    person who certified (a), (b) or (c) and I have not modified
    it.

(d) I understand and agree that this project and the contribution
    are public and that a record of the contribution (including all
    personal information I submit with it, including my sign-off) is
    maintained indefinitely and may be redistributed consistent with
    this project or the open source license(s) involved.
```

---

**Any unsigned commits will be rejected during the PR process.**

Tips: You can use `git commit -s` to sign your commits.
You can configure your git client to use your name and email with:
```shell
git config --global user.name "Your Name"
git config --global user.email "Your Email"
```
You can omit the `--global` flag to use the configuration only for the current repository.

---

### Style Guide

This project uses the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html). Please follow the guidelines when contributing.


To maintain consistency and readability across the codebase, please adhere to the following conventions:

* **File Naming:** All source and header files (`.hpp`, `.cpp`, `.h`, `.c`) must use **`snake_case`** for their names (
  e.g., `my_awesome_module.hpp`, `parser.cpp`).
     *  C++ source files must end with the `.cpp` extension.
     *  C++ header files must end with the `.hpp` extension.

* **File Headers (Copyright & License):** Each source file must begin with a short file description header explaining
    its purpose and key details. The header must also include copyright information and the SPDX license identifier.
    
    Example C++ source file header:
    ```c++
    /*
     * File: file.cpp
     * Description: This is the description of the file.
     *
     * Copyright (C) [Year] [Your Full Name or Alias]
     * SPDX-License-Identifier: Apache-2.0
     */
    ```
    The header must be formatted in this order. Any Source file submitted without a valid copyright notice will be rejected.
    1. File
    2. Description
    3. Copyright Notice(s)
    4. SPDX License Identifier

* **Header Guards:** To prevent multiple inclusions, all header files (`.hpp`) must use include guards. The naming
  convention for these guards should follow the pattern:
  AKL_FILENAME_EXTENSION`

    * **Structure:** `AKL_` (prefix) `FILENAME_` (snake_case filename)
      `EXTENSION` (e.g., `H`, `HPP`)

    * **Example for `common.hpp`:**
        ```cpp
        #ifndef AKL_COMMON_HPP
        #define AKL_COMMON_HPP

        // ... file content ...

        #endif // AKL_COMMON_HPP
        ```

* **Commenting:** Do not be afraid to comment. Comments are a great way to explain your code and help others understand
  your code. Comments should be in a place where they are useful and not redundant. **Do not** comment self-explanatory
  code. Feel free to comment on anything but keep it concise and not cluttered. This includes but is not limited
  to:
    * Explain why a particular piece of code is written the way it is.
    * Breakdown and explain how certain parts of the code work.
    * Personal notes and thoughts.
        * Please ensure your comments are complying with [**CODE OF CONDUCT**](CODE_OF_CONDUCT.md) and are
          appropriate for the project. Avoid discriminatory or offensive comments.

* **Naming Conventions:** Function names should be in `PascalCase` (e.g., `MyAwesomeFunction`).
      under any normal circumstances. An exception to this rule is when the function is a getter or setter. In this
      case, the function name should be in `snake_case` (e.g., `get_my_awesome_variable`).

* **Tabs vs. Spaces:** Use spaces for indentation in files. Do not use tabs. See [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) for more details.

Clang-tidy does not automatically check and correct function names convention. Please ensure that all
function names are adhering to the above conventions.

---

### Pull Request Checklist

To ensure that your pull request is pass the checks, please ensure that you have completed the following:
- [ ] Your code follows the style guide outlined above.
- [ ] You have signed the Developer Certificate of Origin (DCO) for all your commits.
- [ ] You have run clang-format and clang-tidy on your code, and it passes all checks.

---

Thanks for contributing!
