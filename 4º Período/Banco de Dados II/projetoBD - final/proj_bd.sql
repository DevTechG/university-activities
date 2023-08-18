-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 21-Jan-2022 às 22:49
-- Versão do servidor: 10.4.22-MariaDB
-- versão do PHP: 7.3.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `proj_bd`
--
CREATE DATABASE IF NOT EXISTS `proj_bd` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `proj_bd`;

-- --------------------------------------------------------

--
-- Estrutura da tabela `aposta`
--

CREATE TABLE `aposta` (
  `cod` int(11) NOT NULL,
  `esporte` varchar(10) NOT NULL,
  `partida` varchar(100) NOT NULL,
  `mercado` varchar(50) DEFAULT NULL,
  `valor` float NOT NULL,
  `odd` float NOT NULL,
  `lucro` float DEFAULT NULL,
  `acerto` tinyint(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `aposta`
--

INSERT INTO `aposta` (`cod`, `esporte`, `partida`, `mercado`, `valor`, `odd`, `lucro`, `acerto`) VALUES
(3, 'Futsal', 'Argentina vs Paraguai', 'Número de gols - + 1.5', 5, 1.1, 0.5, 1),
(6, 'Futebol', 'Brasil vs Argentina', 'Vitória - Brasil', 10, 1.8, 8, 1),
(7, 'Futsal', 'Argentina vs Brasil', 'Número de escanteios - +5', 10, 1.3, 3, 1),
(8, 'Futsal', 'Flamengo vs Flumengo', 'Vitória - Flamengo', 10, 1.2, 2, 1),
(9, 'Futsal', 'Brasil vs Argentina', 'Vitória - Brasil', 10, 1.8, 8, 1);

-- --------------------------------------------------------

--
-- Estrutura da tabela `docente`
--

CREATE TABLE `docente` (
  `id` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `idade` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `docente`
--

INSERT INTO `docente` (`id`, `nome`, `idade`) VALUES
(1, 'Cleon', 30),
(2, 'Wesley', 43),
(7, 'Wesley', 43);

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `aposta`
--
ALTER TABLE `aposta`
  ADD PRIMARY KEY (`cod`);

--
-- Índices para tabela `docente`
--
ALTER TABLE `docente`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `aposta`
--
ALTER TABLE `aposta`
  MODIFY `cod` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT de tabela `docente`
--
ALTER TABLE `docente`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
