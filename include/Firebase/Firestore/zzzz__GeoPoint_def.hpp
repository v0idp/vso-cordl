#pragma once
// IWYU pragma private; include "Firebase/Firestore/GeoPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeoPoint)
namespace Firebase::Firestore {
class GeoPointProxy;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
struct GeoPoint;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::GeoPoint);
// Dependencies System.IEquatable`1<T>
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.GeoPoint
struct CORDL_TYPE GeoPoint {
public:
// Declarations
 __declspec(property(get=get_Latitude)) double_t  Latitude;

 __declspec(property(get=get_Longitude)) double_t  Longitude;

/// @brief Field _latitude, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__latitude, put=__cordl_internal_set__latitude)) double_t  _latitude;

/// @brief Field _longitude, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get__longitude, put=__cordl_internal_set__longitude)) double_t  _longitude;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::GeoPoint>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::GeoPoint>*() ;

/// @brief Method ConvertFromProxy, addr 0x191544c, size 0x78, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::GeoPoint ConvertFromProxy(::Firebase::Firestore::GeoPointProxy*  obj) ;

/// @brief Method ConvertToProxy, addr 0x191062c, size 0x68, virtual false, abstract: false, final false
inline ::Firebase::Firestore::GeoPointProxy* ConvertToProxy() ;

/// @brief Method Equals, addr 0x191a2d4, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191a35c, size 0x2c, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::GeoPoint  other) ;

/// @brief Method GetHashCode, addr 0x191a388, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x191a3a8, size 0xa8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr double_t const& __cordl_internal_get__latitude() const;

constexpr double_t& __cordl_internal_get__latitude() ;

constexpr double_t const& __cordl_internal_get__longitude() const;

constexpr double_t& __cordl_internal_get__longitude() ;

constexpr void __cordl_internal_set__latitude(double_t  value) ;

constexpr void __cordl_internal_set__longitude(double_t  value) ;

/// @brief Method .ctor, addr 0x191a1dc, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(double_t  latitude, double_t  longitude) ;

/// @brief Method get_Latitude, addr 0x191a2c4, size 0x8, virtual false, abstract: false, final false
inline double_t get_Latitude() ;

/// @brief Method get_Longitude, addr 0x191a2cc, size 0x8, virtual false, abstract: false, final false
inline double_t get_Longitude() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::GeoPoint>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::GeoPoint>* i___System__IEquatable_1___Firebase__Firestore__GeoPoint_() ;

// Ctor Parameters []
// @brief default ctor
constexpr GeoPoint() ;

// Ctor Parameters [CppParam { name: "_latitude", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_longitude", ty: "double_t", modifiers: "", def_value: None }]
constexpr GeoPoint(double_t  _latitude, double_t  _longitude) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____latitude_padding[0x0];
/// @brief Field _latitude, offset: 0x0, size: 0x8, def value: None
 double_t  ____latitude;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____latitude_padding_forAlignment[0x0];
/// @brief Field _latitude, offset: 0x0, size: 0x8, def value: None
 double_t  ____latitude_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____longitude_padding[0x8];
/// @brief Field _longitude, offset: 0x8, size: 0x8, def value: None
 double_t  ____longitude;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____longitude_padding_forAlignment[0x8];
/// @brief Field _longitude, offset: 0x8, size: 0x8, def value: None
 double_t  ____longitude_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::GeoPoint, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::GeoPoint, "Firebase.Firestore", "GeoPoint");
