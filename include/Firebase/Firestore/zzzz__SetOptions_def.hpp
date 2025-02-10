#pragma once
// IWYU pragma private; include "Firebase/Firestore/SetOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetOptions)
namespace Firebase::Firestore {
class FieldPath;
}
namespace Firebase::Firestore {
class SetOptionsProxy;
}
namespace Firebase::Firestore {
struct SetOptions_Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
struct SetOptions_Type;
}
namespace Firebase::Firestore {
class SetOptions;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::SetOptions_Type);
MARK_REF_PTR_T(::Firebase::Firestore::SetOptions);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.SetOptions/Type
struct CORDL_TYPE SetOptions_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SetOptions_Type_Unwrapped
enum struct __SetOptions_Type_Unwrapped : int32_t {
__E_Overwrite = static_cast<int32_t>(0x0),
__E_Merge = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SetOptions_Type_Unwrapped () const noexcept {
return static_cast<__SetOptions_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SetOptions_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SetOptions_Type(int32_t  value__) noexcept;

/// @brief Field Merge value: I32(1)
static ::Firebase::Firestore::SetOptions_Type const Merge;

/// @brief Field Overwrite value: I32(0)
static ::Firebase::Firestore::SetOptions_Type const Overwrite;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::SetOptions_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SetOptions_Type, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies Firebase.Firestore.SetOptions::Type, System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.SetOptions
class CORDL_TYPE SetOptions : public ::System::Object {
public:
// Declarations
using Type = ::Firebase::Firestore::SetOptions_Type;

 __declspec(property(get=get_Proxy)) ::Firebase::Firestore::SetOptionsProxy*  Proxy;

/// @brief Field <>f__am$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache1, put=setStaticF___f__am$cache1)) ::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*  __f__am$cache1;

/// @brief Field <>f__am$cache2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache2, put=setStaticF___f__am$cache2)) ::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*  __f__am$cache2;

/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::SetOptionsProxy*  _proxy;

/// @brief Field fields, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fields, put=__cordl_internal_set_fields)) ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>  fields;

/// @brief Field setType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_setType, put=__cordl_internal_set_setType)) ::Firebase::Firestore::SetOptions_Type  setType;

/// @brief Method Equals, addr 0x19191f8, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191925c, size 0x74, virtual false, abstract: false, final false
inline bool Equals(::Firebase::Firestore::SetOptions*  other) ;

/// @brief Method GetHashCode, addr 0x19192d0, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Firebase::Firestore::SetOptions* New_ctor(::Firebase::Firestore::SetOptionsProxy*  proxy) ;

/// @brief Method ToString, addr 0x1918f94, size 0x264, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method <GetHashCode>m__2, addr 0x19193e8, size 0x38, virtual false, abstract: false, final false
static inline int32_t _GetHashCode_m__2(int32_t  current, ::Firebase::Firestore::FieldPath*  f) ;

/// @brief Method <ToString>m__1, addr 0x19193cc, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW _ToString_m__1(::Firebase::Firestore::FieldPath*  f) ;

constexpr ::Firebase::Firestore::SetOptionsProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::SetOptionsProxy*& __cordl_internal_get__proxy() ;

constexpr ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*> const& __cordl_internal_get_fields() const;

constexpr ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>& __cordl_internal_get_fields() ;

constexpr ::Firebase::Firestore::SetOptions_Type const& __cordl_internal_get_setType() const;

constexpr ::Firebase::Firestore::SetOptions_Type& __cordl_internal_get_setType() ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::SetOptionsProxy*  value) ;

constexpr void __cordl_internal_set_fields(::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>  value) ;

constexpr void __cordl_internal_set_setType(::Firebase::Firestore::SetOptions_Type  value) ;

/// @brief Method .ctor, addr 0x1918e68, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::SetOptionsProxy*  proxy) ;

static inline ::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>* getStaticF___f__am$cache1() ;

static inline ::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>* getStaticF___f__am$cache2() ;

/// @brief Method get_MergeAll, addr 0x1918f00, size 0x94, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::SetOptions* get_MergeAll() ;

/// @brief Method get_Overwrite, addr 0x1918718, size 0xb0, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::SetOptions* get_Overwrite() ;

/// @brief Method get_Proxy, addr 0x1918ef8, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::SetOptionsProxy* get_Proxy() ;

static inline void setStaticF___f__am$cache1(::System::Func_2<::Firebase::Firestore::FieldPath*,::StringW>*  value) ;

static inline void setStaticF___f__am$cache2(::System::Func_3<int32_t,::Firebase::Firestore::FieldPath*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetOptions(SetOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetOptions(SetOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11194};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::SetOptionsProxy*  ____proxy;

/// @brief Field setType, offset: 0x18, size: 0x4, def value: None
 ::Firebase::Firestore::SetOptions_Type  ___setType;

/// @brief Field fields, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Firebase::Firestore::FieldPath*,::Array<::Firebase::Firestore::FieldPath*>*>  ___fields;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::SetOptions, ____proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::SetOptions, ___setType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::SetOptions, ___fields) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::SetOptions, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SetOptions_Type, "Firebase.Firestore", "SetOptions/Type");
NEED_NO_BOX(::Firebase::Firestore::SetOptions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SetOptions*, "Firebase.Firestore", "SetOptions");
