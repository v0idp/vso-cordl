#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JPropertyKeyedCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPropertyKeyedCollection)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JPropertyKeyedCollection);
// Dependencies System.Collections.ObjectModel.Collection`1<T>
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JPropertyKeyedCollection
class CORDL_TYPE JPropertyKeyedCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::Linq::JToken*> {
public:
// Declarations
/// @brief Field Comparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Comparer, put=setStaticF_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<::StringW>*  Comparer;

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

/// @brief Field _dictionary, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictionary, put=__cordl_internal_set__dictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>*  _dictionary;

/// @brief Method AddKey, addr 0x28281d8, size 0x70, virtual false, abstract: false, final false
inline void AddKey(::StringW  key, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method ClearItems, addr 0x28282f0, size 0x78, virtual true, abstract: false, final false
inline void ClearItems() ;

/// @brief Method Contains, addr 0x2825c24, size 0xac, virtual false, abstract: false, final false
inline bool Contains(::StringW  key) ;

/// @brief Method EnsureDictionary, addr 0x2828248, size 0xa8, virtual false, abstract: false, final false
inline void EnsureDictionary() ;

/// @brief Method GetKeyForItem, addr 0x2828368, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetKeyForItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method IndexOfReference, addr 0x282489c, size 0xa4, virtual false, abstract: false, final false
inline int32_t IndexOfReference(::Newtonsoft::Json::Linq::JToken*  t) ;

/// @brief Method InsertItem, addr 0x28283e8, size 0x78, virtual true, abstract: false, final false
inline void InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

static inline ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* New_ctor() ;

/// @brief Method RemoveItem, addr 0x2828460, size 0xf4, virtual true, abstract: false, final false
inline void RemoveItem(int32_t  index) ;

/// @brief Method RemoveKey, addr 0x2828554, size 0x60, virtual false, abstract: false, final false
inline void RemoveKey(::StringW  key) ;

/// @brief Method SetItem, addr 0x28285b4, size 0x208, virtual true, abstract: false, final false
inline void SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method TryGetValue, addr 0x2824bc0, size 0x78, virtual false, abstract: false, final false
inline bool TryGetValue(::StringW  key, ::ByRef<::Newtonsoft::Json::Linq::JToken*>  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__dictionary() ;

constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method .ctor, addr 0x2824688, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::StringW>* getStaticF_Comparer() ;

/// @brief Method get_Keys, addr 0x2825ce8, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JPropertyKeyedCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JPropertyKeyedCollection(JPropertyKeyedCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JPropertyKeyedCollection(JPropertyKeyedCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9873};

/// @brief Field _dictionary, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>*  ____dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyKeyedCollection, ____dictionary) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JPropertyKeyedCollection, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyKeyedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
