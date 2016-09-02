#include <libanalyzer/include/info/info.h>
#define MAP_TYPE_STAT std::map<analyzer::Infos::TYPE_STAT, std::string>
#define STAT_INDEX(x, y) (int)y * (int)analyzer::Infos::TYPE_STAT::END + (int)x

namespace db {

	using TYPE_STAT = analyzer::Infos::TYPE_STAT;

	MAP_TYPE_STAT mapTypeStat = {
		{ TYPE_STAT::MAX, "StatMax" },
		{ TYPE_STAT::MIN, "StatMin" },
		{ TYPE_STAT::MEAN, "StatMean" },
		{ TYPE_STAT::SUM, "StatSum" },
		{ TYPE_STAT::VAR, "StatVar" },
		{ TYPE_STAT::STD, "StatStd" },
		{ TYPE_STAT::NORM_0, "StatNorm0" },
		{ TYPE_STAT::NORM_1, "StatNorm1" },
		{ TYPE_STAT::NORM_2, "StatNorm2" },
		{ TYPE_STAT::QUANTILE_1_2, "StatMid" },
		{ TYPE_STAT::QUANTILE_1_4, "StatQuarter1" },
		{ TYPE_STAT::QUANTILE_3_4, "StatQuarter3" }
	};

}