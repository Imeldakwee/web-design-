<body>
    <nav class="navbar navbar-expand-sm">

        <a href="index.php">
            <img id="logo" src="" alt="logo">
        </a>
          
        <ul class="navbar-nav navbar-expand-sm">

            <li class="nav-item">
                <a class="nav-link <?php if ($pageName == "index.php") echo "active"; ?>" href="index.php">HOME</a>
            </li> 

            <li class="nav-item">
                <a class="nav-link <?php if ($pageName == "facilities.php") echo "active"; ?>" href="facilities.php">FACILITIES</a>
            </li>

            <li class="nav-item">
                <a class="nav-link <?php if ($pageName == "gallery.php") echo "active"; ?>" href="gallery.php">GALLERY</a>
            </li>

            <li class="nav-item">
                <a class="nav-link <?php if ($pageName == "register.php") echo "active"; ?>" href="register.php">REGISTER</a>
            </li>

            <li class="nav-item">
                <a class="nav-link <?php if ($pageName == "login.php") echo "active"; ?>" href="login.php">LOGIN</a>
            </li>

        </ul>

    </nav>