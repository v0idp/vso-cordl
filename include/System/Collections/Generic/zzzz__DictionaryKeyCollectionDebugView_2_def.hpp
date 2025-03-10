#pragma once
// IWYU pragma private; include "System/Collections/Generic/DictionaryKeyCollectionDebugView_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryKeyCollectionDebugView_2)
// Forward declare root types
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class DictionaryKeyCollectionDebugView_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::DictionaryKeyCollectionDebugView_2);
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.DictionaryKeyCollectionDebugView`2<TKey,TValue>
class CORDL_TYPE DictionaryKeyCollectionDebugView_2 : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionaryKeyCollectionDebugView_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionaryKeyCollectionDebugView_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryKeyCollectionDebugView_2(DictionaryKeyCollectionDebugView_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryKeyCollectionDebugView_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryKeyCollectionDebugView_2(DictionaryKeyCollectionDebugView_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7728};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::DictionaryKeyCollectionDebugView_2, "System.Collections.Generic", "DictionaryKeyCollectionDebugView`2");
