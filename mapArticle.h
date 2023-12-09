#pragma once

using namespace System;

namespace NS_mapArticle
{
	ref class mapArticle
	{
	public:
		mapArticle();
		String^ INSERT(int^ id_commande, int^ id_article, int^ quantite);
	};
}