#pragma once
// IWYU pragma private; include "VROSC/SessionsSearchHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionsSearchHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringField;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringType;
}
namespace VROSC {
class SessionsSearchHelper_Filtering;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingDirection;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingField;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingType;
}
namespace VROSC {
class SessionsSearchHelper_Ordering;
}
// Forward declare root types
namespace VROSC {
struct SessionsSearchHelper_FilteringField;
}
namespace VROSC {
struct SessionsSearchHelper_FilteringType;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingDirection;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingField;
}
namespace VROSC {
struct SessionsSearchHelper_OrderingType;
}
namespace VROSC {
class SessionsSearchHelper;
}
namespace VROSC {
class SessionsSearchHelper_Filtering;
}
namespace VROSC {
class SessionsSearchHelper_Ordering;
}
// Write type traits
MARK_VAL_T(::VROSC::SessionsSearchHelper_FilteringField);
MARK_VAL_T(::VROSC::SessionsSearchHelper_FilteringType);
MARK_VAL_T(::VROSC::SessionsSearchHelper_OrderingDirection);
MARK_VAL_T(::VROSC::SessionsSearchHelper_OrderingField);
MARK_VAL_T(::VROSC::SessionsSearchHelper_OrderingType);
MARK_REF_PTR_T(::VROSC::SessionsSearchHelper);
MARK_REF_PTR_T(::VROSC::SessionsSearchHelper_Filtering);
MARK_REF_PTR_T(::VROSC::SessionsSearchHelper_Ordering);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsSearchHelper/OrderingType
struct CORDL_TYPE SessionsSearchHelper_OrderingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsSearchHelper_OrderingType_Unwrapped
enum struct __SessionsSearchHelper_OrderingType_Unwrapped : int32_t {
__E_Newest = static_cast<int32_t>(0x0),
__E_Oldest = static_cast<int32_t>(0x1),
__E_AZ = static_cast<int32_t>(0x2),
__E_ZA = static_cast<int32_t>(0x3),
__E_MostPopular = static_cast<int32_t>(0x4),
__E_LeastPopular = static_cast<int32_t>(0x5),
__E_MostCheers = static_cast<int32_t>(0x6),
__E_LeastCheers = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsSearchHelper_OrderingType_Unwrapped () const noexcept {
return static_cast<__SessionsSearchHelper_OrderingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_OrderingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsSearchHelper_OrderingType(int32_t  value__) noexcept;

/// @brief Field AZ value: I32(2)
static ::VROSC::SessionsSearchHelper_OrderingType const AZ;

/// @brief Field LeastCheers value: I32(7)
static ::VROSC::SessionsSearchHelper_OrderingType const LeastCheers;

/// @brief Field LeastPopular value: I32(5)
static ::VROSC::SessionsSearchHelper_OrderingType const LeastPopular;

/// @brief Field MostCheers value: I32(6)
static ::VROSC::SessionsSearchHelper_OrderingType const MostCheers;

/// @brief Field MostPopular value: I32(4)
static ::VROSC::SessionsSearchHelper_OrderingType const MostPopular;

/// @brief Field Newest value: I32(0)
static ::VROSC::SessionsSearchHelper_OrderingType const Newest;

/// @brief Field Oldest value: I32(1)
static ::VROSC::SessionsSearchHelper_OrderingType const Oldest;

/// @brief Field ZA value: I32(3)
static ::VROSC::SessionsSearchHelper_OrderingType const ZA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1173};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_OrderingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_OrderingType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsSearchHelper/OrderingField
struct CORDL_TYPE SessionsSearchHelper_OrderingField {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsSearchHelper_OrderingField_Unwrapped
enum struct __SessionsSearchHelper_OrderingField_Unwrapped : int32_t {
__E_Date = static_cast<int32_t>(0x0),
__E_Alphabetical = static_cast<int32_t>(0x1),
__E_Popularity = static_cast<int32_t>(0x2),
__E_Cheers = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsSearchHelper_OrderingField_Unwrapped () const noexcept {
return static_cast<__SessionsSearchHelper_OrderingField_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_OrderingField() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsSearchHelper_OrderingField(int32_t  value__) noexcept;

/// @brief Field Alphabetical value: I32(1)
static ::VROSC::SessionsSearchHelper_OrderingField const Alphabetical;

/// @brief Field Cheers value: I32(3)
static ::VROSC::SessionsSearchHelper_OrderingField const Cheers;

/// @brief Field Date value: I32(0)
static ::VROSC::SessionsSearchHelper_OrderingField const Date;

/// @brief Field Popularity value: I32(2)
static ::VROSC::SessionsSearchHelper_OrderingField const Popularity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_OrderingField, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_OrderingField, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsSearchHelper/OrderingDirection
struct CORDL_TYPE SessionsSearchHelper_OrderingDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsSearchHelper_OrderingDirection_Unwrapped
enum struct __SessionsSearchHelper_OrderingDirection_Unwrapped : int32_t {
__E_Descending = static_cast<int32_t>(0x0),
__E_Ascending = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsSearchHelper_OrderingDirection_Unwrapped () const noexcept {
return static_cast<__SessionsSearchHelper_OrderingDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_OrderingDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsSearchHelper_OrderingDirection(int32_t  value__) noexcept;

/// @brief Field Ascending value: I32(1)
static ::VROSC::SessionsSearchHelper_OrderingDirection const Ascending;

/// @brief Field Descending value: I32(0)
static ::VROSC::SessionsSearchHelper_OrderingDirection const Descending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1175};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_OrderingDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_OrderingDirection, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsSearchHelper/FilteringType
struct CORDL_TYPE SessionsSearchHelper_FilteringType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsSearchHelper_FilteringType_Unwrapped
enum struct __SessionsSearchHelper_FilteringType_Unwrapped : int32_t {
__E_Search = static_cast<int32_t>(0x0),
__E_LastWeek = static_cast<int32_t>(0x1),
__E_LastMonth = static_cast<int32_t>(0x2),
__E_LastYear = static_cast<int32_t>(0x3),
__E_SinceBeginning = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsSearchHelper_FilteringType_Unwrapped () const noexcept {
return static_cast<__SessionsSearchHelper_FilteringType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_FilteringType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsSearchHelper_FilteringType(int32_t  value__) noexcept;

/// @brief Field LastMonth value: I32(2)
static ::VROSC::SessionsSearchHelper_FilteringType const LastMonth;

/// @brief Field LastWeek value: I32(1)
static ::VROSC::SessionsSearchHelper_FilteringType const LastWeek;

/// @brief Field LastYear value: I32(3)
static ::VROSC::SessionsSearchHelper_FilteringType const LastYear;

/// @brief Field Search value: I32(0)
static ::VROSC::SessionsSearchHelper_FilteringType const Search;

/// @brief Field SinceBeginning value: I32(4)
static ::VROSC::SessionsSearchHelper_FilteringType const SinceBeginning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_FilteringType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_FilteringType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SessionsSearchHelper/FilteringField
struct CORDL_TYPE SessionsSearchHelper_FilteringField {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionsSearchHelper_FilteringField_Unwrapped
enum struct __SessionsSearchHelper_FilteringField_Unwrapped : int32_t {
__E_Date = static_cast<int32_t>(0x0),
__E_Text = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionsSearchHelper_FilteringField_Unwrapped () const noexcept {
return static_cast<__SessionsSearchHelper_FilteringField_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_FilteringField() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionsSearchHelper_FilteringField(int32_t  value__) noexcept;

/// @brief Field Date value: I32(0)
static ::VROSC::SessionsSearchHelper_FilteringField const Date;

/// @brief Field Text value: I32(1)
static ::VROSC::SessionsSearchHelper_FilteringField const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_FilteringField, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_FilteringField, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.SessionsSearchHelper::OrderingDirection, VROSC.SessionsSearchHelper::OrderingField
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsSearchHelper/Ordering
class CORDL_TYPE SessionsSearchHelper_Ordering : public ::System::Object {
public:
// Declarations
/// @brief Field Direction, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Direction, put=__cordl_internal_set_Direction)) ::VROSC::SessionsSearchHelper_OrderingDirection  Direction;

/// @brief Field Field, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Field, put=__cordl_internal_set_Field)) ::VROSC::SessionsSearchHelper_OrderingField  Field;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::VROSC::SessionsSearchHelper_Ordering* New_ctor() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingDirection const& __cordl_internal_get_Direction() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingDirection& __cordl_internal_get_Direction() ;

constexpr ::VROSC::SessionsSearchHelper_OrderingField const& __cordl_internal_get_Field() const;

constexpr ::VROSC::SessionsSearchHelper_OrderingField& __cordl_internal_get_Field() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Direction(::VROSC::SessionsSearchHelper_OrderingDirection  value) ;

constexpr void __cordl_internal_set_Field(::VROSC::SessionsSearchHelper_OrderingField  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1764a40, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_Ordering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper_Ordering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsSearchHelper_Ordering(SessionsSearchHelper_Ordering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper_Ordering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsSearchHelper_Ordering(SessionsSearchHelper_Ordering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1178};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Field, offset: 0x18, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingField  ___Field;

/// @brief Field Direction, offset: 0x1c, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_OrderingDirection  ___Direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_Ordering, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchHelper_Ordering, ___Field) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchHelper_Ordering, ___Direction) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_Ordering, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.SessionsSearchHelper::FilteringField
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsSearchHelper/Filtering
class CORDL_TYPE SessionsSearchHelper_Filtering : public ::System::Object {
public:
// Declarations
/// @brief Field Field, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Field, put=__cordl_internal_set_Field)) ::VROSC::SessionsSearchHelper_FilteringField  Field;

/// @brief Field Filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Filter, put=__cordl_internal_set_Filter)) ::System::Object*  Filter;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::VROSC::SessionsSearchHelper_Filtering* New_ctor() ;

constexpr ::VROSC::SessionsSearchHelper_FilteringField const& __cordl_internal_get_Field() const;

constexpr ::VROSC::SessionsSearchHelper_FilteringField& __cordl_internal_get_Field() ;

constexpr ::System::Object* const& __cordl_internal_get_Filter() const;

constexpr ::System::Object*& __cordl_internal_get_Filter() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Field(::VROSC::SessionsSearchHelper_FilteringField  value) ;

constexpr void __cordl_internal_set_Filter(::System::Object*  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0x1764a90, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper_Filtering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper_Filtering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsSearchHelper_Filtering(SessionsSearchHelper_Filtering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper_Filtering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsSearchHelper_Filtering(SessionsSearchHelper_Filtering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1179};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Field, offset: 0x18, size: 0x4, def value: None
 ::VROSC::SessionsSearchHelper_FilteringField  ___Field;

/// @brief Field Filter, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___Filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SessionsSearchHelper_Filtering, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchHelper_Filtering, ___Field) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SessionsSearchHelper_Filtering, ___Filter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper_Filtering, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SessionsSearchHelper
class CORDL_TYPE SessionsSearchHelper : public ::System::Object {
public:
// Declarations
using Filtering = ::VROSC::SessionsSearchHelper_Filtering;

using FilteringField = ::VROSC::SessionsSearchHelper_FilteringField;

using FilteringType = ::VROSC::SessionsSearchHelper_FilteringType;

using Ordering = ::VROSC::SessionsSearchHelper_Ordering;

using OrderingDirection = ::VROSC::SessionsSearchHelper_OrderingDirection;

using OrderingField = ::VROSC::SessionsSearchHelper_OrderingField;

using OrderingType = ::VROSC::SessionsSearchHelper_OrderingType;

/// @brief Field FilteringValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FilteringValues, put=setStaticF_FilteringValues)) ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*  FilteringValues;

/// @brief Field OrderingValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OrderingValues, put=setStaticF_OrderingValues)) ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*  OrderingValues;

/// @brief Method GetFilteringTypeByName, addr 0x1764308, size 0x1b8, virtual false, abstract: false, final false
static inline ::VROSC::SessionsSearchHelper_FilteringType GetFilteringTypeByName(::StringW  filteringName) ;

/// @brief Method GetOrderingTypeByName, addr 0x1764094, size 0x1b0, virtual false, abstract: false, final false
static inline ::VROSC::SessionsSearchHelper_OrderingType GetOrderingTypeByName(::StringW  orderingName) ;

static inline ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>* getStaticF_FilteringValues() ;

static inline ::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>* getStaticF_OrderingValues() ;

static inline void setStaticF_FilteringValues(::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_FilteringType,::VROSC::SessionsSearchHelper_Filtering*>*  value) ;

static inline void setStaticF_OrderingValues(::System::Collections::Generic::Dictionary_2<::VROSC::SessionsSearchHelper_OrderingType,::VROSC::SessionsSearchHelper_Ordering*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionsSearchHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionsSearchHelper(SessionsSearchHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionsSearchHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionsSearchHelper(SessionsSearchHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SessionsSearchHelper, 0x10>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_FilteringField, "VROSC", "SessionsSearchHelper/FilteringField");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_FilteringType, "VROSC", "SessionsSearchHelper/FilteringType");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_OrderingDirection, "VROSC", "SessionsSearchHelper/OrderingDirection");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_OrderingField, "VROSC", "SessionsSearchHelper/OrderingField");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_OrderingType, "VROSC", "SessionsSearchHelper/OrderingType");
NEED_NO_BOX(::VROSC::SessionsSearchHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper*, "VROSC", "SessionsSearchHelper");
NEED_NO_BOX(::VROSC::SessionsSearchHelper_Filtering);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_Filtering*, "VROSC", "SessionsSearchHelper/Filtering");
NEED_NO_BOX(::VROSC::SessionsSearchHelper_Ordering);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsSearchHelper_Ordering*, "VROSC", "SessionsSearchHelper/Ordering");
