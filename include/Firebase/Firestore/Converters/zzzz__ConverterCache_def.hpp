#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/ConverterCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConverterCache)
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class ConverterCache;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::ConverterCache);
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.ConverterCache
class CORDL_TYPE ConverterCache : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::System::Type*,bool>*  __f__am$cache0;

/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::System::Func_2<::System::Type*,::System::Type*>*  __f__mg$cache0;

/// @brief Field s_converters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_converters, put=setStaticF_s_converters)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  s_converters;

/// @brief Field s_createDictionaryConverter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_createDictionaryConverter, put=setStaticF_s_createDictionaryConverter)) ::System::Reflection::MethodInfo*  s_createDictionaryConverter;

/// @brief Method CreateConverter, addr 0x1912f14, size 0x500, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* CreateConverter(::System::Type*  targetType) ;

/// @brief Method CreateDictionaryConverter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* CreateDictionaryConverter(::System::Type*  targetType) ;

/// @brief Method GetConverter, addr 0x190ed68, size 0x1a4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* GetConverter(::System::Type*  targetType) ;

/// @brief Method InitializeConverterCache, addr 0x1913414, size 0xb8, virtual false, abstract: false, final false
static inline void InitializeConverterCache() ;

/// @brief Method MapInterfaceToDictionaryValueTypeArgument, addr 0x19139b4, size 0x160, virtual false, abstract: false, final false
static inline ::System::Type* MapInterfaceToDictionaryValueTypeArgument(::System::Type*  iface) ;

/// @brief Method TryGetStringDictionaryValueType, addr 0x191373c, size 0x278, virtual false, abstract: false, final false
static inline bool TryGetStringDictionaryValueType(::System::Type*  type, ::ByRef<::System::Type*>  elementType) ;

/// @brief Method <TryGetStringDictionaryValueType>m__0, addr 0x1915060, size 0xc, virtual false, abstract: false, final false
static inline bool _TryGetStringDictionaryValueType_m__0(::System::Type*  t) ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___f__am$cache0() ;

static inline ::System::Func_2<::System::Type*,::System::Type*>* getStaticF___f__mg$cache0() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* getStaticF_s_converters() ;

static inline ::System::Reflection::MethodInfo* getStaticF_s_createDictionaryConverter() ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::System::Type*,bool>*  value) ;

static inline void setStaticF___f__mg$cache0(::System::Func_2<::System::Type*,::System::Type*>*  value) ;

static inline void setStaticF_s_converters(::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  value) ;

static inline void setStaticF_s_createDictionaryConverter(::System::Reflection::MethodInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterCache(ConverterCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterCache(ConverterCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::ConverterCache, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::ConverterCache);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::ConverterCache*, "Firebase.Firestore.Converters", "ConverterCache");
