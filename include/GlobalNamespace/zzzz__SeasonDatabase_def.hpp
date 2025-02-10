#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonDatabase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SeasonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SeasonDatabase)
namespace GlobalNamespace {
class SeasonDatabase_Season;
}
namespace GlobalNamespace {
struct SeasonType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class SeasonDatabase;
}
namespace GlobalNamespace {
class SeasonDatabase_Season;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SeasonDatabase);
MARK_REF_PTR_T(::GlobalNamespace::SeasonDatabase_Season);
// Dependencies SeasonType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonDatabase/Season
class CORDL_TYPE SeasonDatabase_Season : public ::System::Object {
public:
// Declarations
/// @brief Field endDay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_endDay, put=__cordl_internal_set_endDay)) int32_t  endDay;

/// @brief Field endMonth, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endMonth, put=__cordl_internal_set_endMonth)) int32_t  endMonth;

/// @brief Field seasonType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_seasonType, put=__cordl_internal_set_seasonType)) ::GlobalNamespace::SeasonType  seasonType;

/// @brief Field startDay, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_startDay, put=__cordl_internal_set_startDay)) int32_t  startDay;

/// @brief Field startMonth, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_startMonth, put=__cordl_internal_set_startMonth)) int32_t  startMonth;

/// @brief Method IsCurrentSeason, addr 0x16c3278, size 0xe4, virtual false, abstract: false, final false
inline bool IsCurrentSeason(::System::DateTime  currentDate) ;

static inline ::GlobalNamespace::SeasonDatabase_Season* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_endDay() const;

constexpr int32_t& __cordl_internal_get_endDay() ;

constexpr int32_t const& __cordl_internal_get_endMonth() const;

constexpr int32_t& __cordl_internal_get_endMonth() ;

constexpr ::GlobalNamespace::SeasonType const& __cordl_internal_get_seasonType() const;

constexpr ::GlobalNamespace::SeasonType& __cordl_internal_get_seasonType() ;

constexpr int32_t const& __cordl_internal_get_startDay() const;

constexpr int32_t& __cordl_internal_get_startDay() ;

constexpr int32_t const& __cordl_internal_get_startMonth() const;

constexpr int32_t& __cordl_internal_get_startMonth() ;

constexpr void __cordl_internal_set_endDay(int32_t  value) ;

constexpr void __cordl_internal_set_endMonth(int32_t  value) ;

constexpr void __cordl_internal_set_seasonType(::GlobalNamespace::SeasonType  value) ;

constexpr void __cordl_internal_set_startDay(int32_t  value) ;

constexpr void __cordl_internal_set_startMonth(int32_t  value) ;

/// @brief Method .ctor, addr 0x16c3364, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonDatabase_Season() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonDatabase_Season", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonDatabase_Season(SeasonDatabase_Season && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonDatabase_Season", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonDatabase_Season(SeasonDatabase_Season const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{56};

/// @brief Field seasonType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SeasonType  ___seasonType;

/// @brief Field startMonth, offset: 0x14, size: 0x4, def value: None
 int32_t  ___startMonth;

/// @brief Field startDay, offset: 0x18, size: 0x4, def value: None
 int32_t  ___startDay;

/// @brief Field endMonth, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___endMonth;

/// @brief Field endDay, offset: 0x20, size: 0x4, def value: None
 int32_t  ___endDay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonDatabase_Season, ___seasonType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonDatabase_Season, ___startMonth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonDatabase_Season, ___startDay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonDatabase_Season, ___endMonth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SeasonDatabase_Season, ___endDay) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonDatabase_Season, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SeasonDatabase
class CORDL_TYPE SeasonDatabase : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Season = ::GlobalNamespace::SeasonDatabase_Season;

/// @brief Field seasons, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_seasons, put=__cordl_internal_set_seasons)) ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*  seasons;

/// @brief Method GetCurrentSeason, addr 0x16c2c38, size 0x194, virtual false, abstract: false, final false
inline ::GlobalNamespace::SeasonType GetCurrentSeason() ;

static inline ::GlobalNamespace::SeasonDatabase* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>* const& __cordl_internal_get_seasons() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*& __cordl_internal_get_seasons() ;

constexpr void __cordl_internal_set_seasons(::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*  value) ;

/// @brief Method .ctor, addr 0x16c335c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonDatabase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonDatabase(SeasonDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonDatabase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonDatabase(SeasonDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{57};

/// @brief Field seasons, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SeasonDatabase_Season*>*  ___seasons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SeasonDatabase, ___seasons) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SeasonDatabase, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SeasonDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonDatabase*, "", "SeasonDatabase");
NEED_NO_BOX(::GlobalNamespace::SeasonDatabase_Season);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SeasonDatabase_Season*, "", "SeasonDatabase/Season");
