#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/EnumUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumUtils)
namespace Newtonsoft::Json::Serialization {
class CamelCaseNamingStrategy;
}
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
namespace Newtonsoft::Json::Utilities {
class EnumInfo;
}
namespace Newtonsoft::Json::Utilities {
class EnumUtils___c;
}
namespace Newtonsoft::Json::Utilities {
template<typename T1,typename T2>
struct StructMultiKey_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct StringComparison;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class EnumUtils;
}
namespace Newtonsoft::Json::Utilities {
class EnumUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::EnumUtils___c);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.EnumUtils/<>c
class CORDL_TYPE EnumUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Newtonsoft::Json::Utilities::EnumUtils___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*  __9__3_0;

static inline ::Newtonsoft::Json::Utilities::EnumUtils___c* New_ctor() ;

/// @brief Method <InitializeValuesAndNames>b__3_0, addr 0x27edf3c, size 0x18, virtual false, abstract: false, final false
inline ::StringW _InitializeValuesAndNames_b__3_0(::System::Runtime::Serialization::EnumMemberAttribute*  a) ;

/// @brief Method .ctor, addr 0x27edf34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Utilities::EnumUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Newtonsoft::Json::Utilities::EnumUtils___c*  value) ;

static inline void setStaticF___9__3_0(::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtils___c(EnumUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtils___c(EnumUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9744};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::EnumUtils___c, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.EnumUtils
class CORDL_TYPE EnumUtils : public ::System::Object {
public:
// Declarations
using __c = ::Newtonsoft::Json::Utilities::EnumUtils___c;

/// @brief Field ValuesAndNamesPerEnum, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ValuesAndNamesPerEnum, put=setStaticF_ValuesAndNamesPerEnum)) ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*  ValuesAndNamesPerEnum;

/// @brief Field _camelCaseNamingStrategy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__camelCaseNamingStrategy, put=setStaticF__camelCaseNamingStrategy)) ::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*  _camelCaseNamingStrategy;

/// @brief Method FindIndexByName, addr 0x27edbec, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> FindIndexByName(::ArrayW<::StringW,::Array<::StringW>*>  enumNames, ::StringW  value, int32_t  valueIndex, int32_t  valueSubstringLength, ::System::StringComparison  comparison) ;

/// @brief Method GetEnumValuesAndNames, addr 0x27ed3a4, size 0xbc, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::EnumInfo* GetEnumValuesAndNames(::System::Type*  enumType) ;

/// @brief Method InitializeValuesAndNames, addr 0x27ec870, size 0x4f4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Utilities::EnumInfo* InitializeValuesAndNames(::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>  key) ;

/// @brief Method InternalFlagsFormat, addr 0x27ed20c, size 0x198, virtual false, abstract: false, final false
static inline ::StringW InternalFlagsFormat(::Newtonsoft::Json::Utilities::EnumInfo*  entry, uint64_t  result) ;

/// @brief Method MatchName, addr 0x27edcdc, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> MatchName(::StringW  value, ::ArrayW<::StringW,::Array<::StringW>*>  enumNames, ::ArrayW<::StringW,::Array<::StringW>*>  resolvedNames, int32_t  valueIndex, int32_t  valueSubstringLength, ::System::StringComparison  comparison) ;

/// @brief Method ParseEnum, addr 0x27ed460, size 0x78c, virtual false, abstract: false, final false
static inline ::System::Object* ParseEnum(::System::Type*  enumType, ::Newtonsoft::Json::Serialization::NamingStrategy*  namingStrategy, ::StringW  value, bool  disallowNumber) ;

/// @brief Method ToUInt64, addr 0x27ecd64, size 0x32c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method TryToString, addr 0x27ed090, size 0x17c, virtual false, abstract: false, final false
static inline bool TryToString(::System::Type*  enumType, ::System::Object*  value, ::Newtonsoft::Json::Serialization::NamingStrategy*  namingStrategy, ::ByRef<::StringW>  name) ;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>* getStaticF_ValuesAndNamesPerEnum() ;

static inline ::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy* getStaticF__camelCaseNamingStrategy() ;

static inline void setStaticF_ValuesAndNamesPerEnum(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::System::Type*,::Newtonsoft::Json::Serialization::NamingStrategy*>,::Newtonsoft::Json::Utilities::EnumInfo*>*  value) ;

static inline void setStaticF__camelCaseNamingStrategy(::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumUtils(EnumUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumUtils(EnumUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::EnumUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::EnumUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::EnumUtils*, "Newtonsoft.Json.Utilities", "EnumUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::EnumUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::EnumUtils___c*, "Newtonsoft.Json.Utilities", "EnumUtils/<>c");
