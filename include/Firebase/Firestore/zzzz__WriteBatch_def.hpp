#pragma once
// IWYU pragma private; include "Firebase/Firestore/WriteBatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WriteBatch)
namespace Firebase::Firestore {
class DocumentReference;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class SetOptions;
}
namespace Firebase::Firestore {
class WriteBatchProxy;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class WriteBatch;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::WriteBatch);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.WriteBatch
class CORDL_TYPE WriteBatch : public ::System::Object {
public:
// Declarations
/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::WriteBatchProxy*  _proxy;

/// @brief Method CommitAsync, addr 0x19187c8, size 0x20, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* CommitAsync() ;

/// @brief Method ConvertToFieldValue, addr 0x191846c, size 0xb4, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* ConvertToFieldValue(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates) ;

/// @brief Method Delete, addr 0x19182f8, size 0x94, virtual false, abstract: false, final false
inline ::Firebase::Firestore::WriteBatch* Delete(::Firebase::Firestore::DocumentReference*  documentReference) ;

static inline ::Firebase::Firestore::WriteBatch* New_ctor(::Firebase::Firestore::WriteBatchProxy*  proxy) ;

/// @brief Method Set, addr 0x1918520, size 0x1f8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::WriteBatch* Set(::Firebase::Firestore::DocumentReference*  documentReference, ::System::Object*  documentData, ::Firebase::Firestore::SetOptions*  options) ;

/// @brief Method Update, addr 0x191838c, size 0xe0, virtual false, abstract: false, final false
inline ::Firebase::Firestore::WriteBatch* Update(::Firebase::Firestore::DocumentReference*  documentReference, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates) ;

constexpr ::Firebase::Firestore::WriteBatchProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::WriteBatchProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::WriteBatchProxy*  value) ;

/// @brief Method .ctor, addr 0x191828c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::WriteBatchProxy*  proxy) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteBatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteBatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteBatch(WriteBatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteBatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteBatch(WriteBatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11189};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::WriteBatchProxy*  ____proxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::WriteBatch, ____proxy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::WriteBatch, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::WriteBatch);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::WriteBatch*, "Firebase.Firestore", "WriteBatch");
