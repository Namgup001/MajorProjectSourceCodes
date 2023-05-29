#ifndef WEB_PAGE_H
#define WEB_PAGE_H



const char INDEX_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <title>Smart Irrigation</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
  <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }

    .navbar {
      background-color: #09072c;
      color: white;
    }
  </style>
</head>

<body>
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="/">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/information">Information</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/samples">Samples</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <!-- Home page content -->
   <!-- Manual and Smart Irrigation -->
  <section id="irrigation" class="py-5">
    <div class="container">
      <div class="row">
        <div class="col-md-6">
          <div class="card" style="width: 18rem;">
            <img src="https://i.imgur.com/aJBkTyd.jpeg" class="card-img-top" alt="Manual Irrigation">
            <div class="card-body">
              <h5 class="card-title">Manual Irrigation</h5>
              <p class="card-text">Manual irrigation allows users to control the watering process manually. You can specify the amount of water to be irrigated for your plants.</p>
              <a href="/manual" class="btn btn-primary">Start</a>
            </div>
          </div>
        </div>
        <div class="col-md-6">
          <div class="card" style="width: 18rem;">
            <img src="https://i.imgur.com/e4Y9Iye.jpeg" class="card-img-top" alt="Smart Irrigation">
            <div class="card-body">
              <h5 class="card-title">Smart Irrigation</h5>
              <p class="card-text">Smart irrigation utilizes advanced technology to automate the watering process based on plant needs, weather conditions, and soil moisture levels.</p>
              <a href="/smart" class="btn btn-primary">Start</a>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>


  <!-- Scripts -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>

</html>
)=====";

const char INFORMATION_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <title>Smart Irrigation - Information</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
  <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }
  </style>
</head>

<body>
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="/">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/samples">Samples</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <!-- Information content -->
  <div class="container">
    <h2>Information</h2>
    <p>This is the information page of our Smart Irrigation website. Here, you can find valuable information and resources related to smart irrigation techniques, technologies, and best practices.</p>
    <p>Feel free to explore the content and learn more about how smart irrigation can help conserve water, improve plant health, and optimize watering schedules.</p>
  </div>

  <!-- Scripts -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>

</html>
)=====";

const char ABOUT_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
    <title>Contacts</title>
    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
    <style>
        body {
            background-color: #f8f9fa;
        }

        .container {
            margin-top: 50px;
        }

        h2 {
            margin-bottom: 30px;
        }

        .navbar {
            background-color: #09072c;
            color: white;
        }
    </style>
</head>
<body>
    <nav class="navbar">
        <div class="container-fluid">
            <a class="navbar-brand" href="#">Contacts</a>
        </div>
    </nav>

    <div class="container">
        <div class="row">
            <div class="col-md-3">
                <div class="card">
                    <img src="naman.jpg" class="card-img-top" alt="Naman Gupta">
                    <div class="card-body">
                        <h5 class="card-title">Naman Gupta</h5>
                        <a href="mailto:naman@example.com" class="btn btn-primary">Send Email</a>
                    </div>
                </div>
            </div>
            <div class="col-md-3">
                <div class="card">
                    <img src="rahul.jpg" class="card-img-top" alt="Rahul Gupta">
                    <div class="card-body">
                        <h5 class="card-title">Rahul Gupta</h5>
                        <a href="mailto:rahul@example.com" class="btn btn-primary">Send Email</a>
                    </div>
                </div>
            </div>
            <div class="col-md-3">
                <div class="card">
                    <img src="rishav.jpg" class="card-img-top" alt="Rishav Raj">
                    <div class="card-body">
                        <h5 class="card-title">Rishav Raj</h5>
                        <a href="mailto:rishav@example.com" class="btn btn-primary">Send Email</a>
                    </div>
                </div>
            </div>
            <div class="col-md-3">
                <div class="card">
                    <img src="sharath.jpg" class="card-img-top" alt="Gugoloth Sharath">
                    <div class="card-body">
                        <h5 class="card-title">Gugoloth Sharath</h5>
                        <a href="mailto:sharath@example.com" class="btn btn-primary">Send Email</a>
                    </div>
                </div>
            </div>
        </div>
    </div>
    
    <!-- Bootstrap JS -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>
</html>

)=====";

const char SAMPLES_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <title>Smart Irrigation - Samples</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
  <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }
  </style>
</head>

<body>
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/information">Information</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <!-- Samples content -->
  <div class="container">
    <h2>Samples</h2>
    <p>Here are some sample projects and case studies showcasing the effectiveness of smart irrigation techniques:</p>
    <ul>
      <li>Case Study 1: Smart Irrigation System in a Residential Garden</li>
      <li>Case Study 2: Smart Irrigation Implementation in a Commercial Farm</li>
      <li>Case Study 3: Smart Irrigation in Urban Landscapes</li>
    </ul>
  </div>

  <!-- Scripts -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>

</html>
)=====";

const char CONTACT_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <title>Smart Irrigation - Contact</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
  <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }
  </style>
</head>

<body>
  <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/information">Information</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/samples">Samples</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <!-- Contact content -->
  <div class="container">
    <h2>Contact</h2>
    <p>For any inquiries or feedback, please feel free to contact us:</p>
    <ul>
      <li>Email: info@smartirrigation.com</li>
      <li>Phone: +1 123-456-7890</li>
      <li>Address: 123 Smart Irrigation Lane, City, State, Country</li>
    </ul>
  </div>

  <!-- Scripts -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>

</html>
)=====";

const char Manual_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Manual Irrigation</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
     <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }

    .navbar {
      background-color: #09072c;
      color: white;
    }
  </style>


  </head>
<body>
 <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/information">Information</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/samples">Samples</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>
  <div class="container">
    <h1 class="mt-4 text-center">Manual Irrigation</h1>

    <form action="/submit" class="mt-4">
      <div class="mb-3">
        <label for="waterAmount" class="form-label">Amount of Water to Irrigate:</label>
        <input type="text" class="form-control" id="waterAmount" name="waterAmount" >
      </div>
      <button id="startButton"  class="btn btn-primary" " ">Submit</button>

    
  </form>

  

  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>
</html>

)=====";

const char Smart_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Smart irrigation</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
     <style>
    body {
      background-color: #f8f9fa;
    }

    .container {
      margin-top: 50px;
    }

    h2 {
      margin-bottom: 30px;
    }

    .navbar {
      background-color: #09072c;
      color: white;
    }
  </style>
  </head>
<body>
 <!-- Navigation -->
  <nav class="navbar navbar-expand-lg navbar-dark">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Smart Irrigation</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
        aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarNav">
        <ul class="navbar-nav">
          <li class="nav-item">
            <a class="nav-link" href="/information">Information</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/about">About Us</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/samples">Samples</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="/contact">Contact</a>
          </li>
        </ul>
      </div>
    </div>
  </nav>

  <div class="container">
    <h1 class="mt-4 text-center">Smart Irrigation</h1>

    <div class=\"container\">
      <form method=\"POST\" action=\"/submit\">
        <div class=\"form-group\">
          <label for=\"cropInput\">Crop:</label>
          <select class=\"form-control\" id=\"cropInput\" name=\"crop\">
            <option value=\"bajra\">Bajra</option>
            <option value=\"maize\">Maize</option>
          </select>
        </div>
        <div class=\"form-group\">
          <label for=\"dateInput\">Irrigation Date:</label>
          <input type=\"date\" class=\"form-control\" id=\"dateInput\" name=\"date\">
        </div>
        <button type=\"submit\" class=\"btn btn-primary\">Submit</button>
      </form>
    </div>

    <div class="text-center mt-4">
      <a href="/manual">Go to Manual Irrigation</a>
    </div>
  </div>

  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
</body>
</html>

)=====";


#endif