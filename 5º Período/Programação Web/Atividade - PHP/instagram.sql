-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 08-Jun-2022 às 16:36
-- Versão do servidor: 10.4.21-MariaDB
-- versão do PHP: 8.0.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `instagram`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `posts`
--

CREATE TABLE `posts` (
  `id` int(11) NOT NULL,
  `usuario` varchar(50) NOT NULL,
  `logo` varchar(200) NOT NULL,
  `img` varchar(200) NOT NULL,
  `legenda` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `posts`
--

INSERT INTO `posts` (`id`, `usuario`, `logo`, `img`, `legenda`) VALUES
(1, 'jubileu23', 'https://upload.wikimedia.org/wikipedia/pt/thumb/6/6f/Lille_OSC_2018_logo.png/120px-Lille_OSC_2018_logo.png', 'https://cdn.dicionariopopular.com/imagens/cafbe07867c53ad097a4d2ef374c01e8.jpg', 'Relembar é viver'),
(3, 'jurema', 'https://upload.wikimedia.org/wikipedia/pt/8/8c/AS_Roma_logo.png?20130721012201', 'https://ahseeit.com/portuguese/king-include/uploads/2021/05/174004781_981275279074534_3894866555447080063_n-2417514117.jpg', 'Atreva-se a ser simples!'),
(4, 'vasp', 'https://upload.wikimedia.org/wikipedia/pt/d/d2/Logo_PSG.png?20160831060331', 'https://pics.me.me/trouxiano-oficialtrouxiano-nossa-voc%C3%AA-t%C3%A1-sumido-voc%C3%AA-j%C3%A1-me-procurou-60619801.png', 'Não há dias cinzentos para quem sonha colorido.'),
(5, 'goias_memes', 'https://i.pinimg.com/736x/84/ef/d4/84efd4c8017aa366e89d6a339d7295c3.jpg', 'https://3.bp.blogspot.com/-bpyDZvX4KG0/XaXOyQRd4iI/AAAAAAAAfng/Y_UdhMNN5f0I5YGUfdF7kWwN5DisHKXfQCLcBGAsYHQ/s1600/Memes%2Bengra%25C3%25A7ados%2B%2B%25281%2529.jpg', 'Ando devagar porque já tive pressa.'),
(6, 'chamaaaa', 'https://upload.wikimedia.org/wikipedia/commons/thumb/2/2e/Flamengo_braz_logo.svg/120px-Flamengo_braz_logo.svg.png', 'https://img.ifunny.co/images/5b9db039fe8d3ab37a58ddcb3910bd3d03f7bf480a34d13f63fef1ecb1b31450_1.jpg', 'A vida é um baile, você segue ou dança.');

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `posts`
--
ALTER TABLE `posts`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `posts`
--
ALTER TABLE `posts`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
