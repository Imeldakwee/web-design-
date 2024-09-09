CREATE TABLE `system` (
    'fileID' serial primary key,
    `name` varchar(255),
    `date` DATE,
    `description` text NOT NULL,
    `role` varchar(255) NOT NULL,
    'site' VARCHAR(255) NOT NULL,
    `image` varchar(255) NOT NULL,
  PRIMARY KEY(`fileID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

create table users
(
  userID serial primary key,
  username varchar(30),
  password char(40),
  reg_date datetime,
  role VARCHAR(20) NOT NULL
);

INSERT INTO users (username, password, role) VALUES
('Hendric', MD5 'reyesnub1', 'spv')
('Christian', MD5 'reyesnub1', 'manager');
