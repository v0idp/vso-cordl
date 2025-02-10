#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldValue)
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class FieldValue;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FieldValue);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FieldValue
class CORDL_TYPE FieldValue : public ::System::Object {
public:
// Declarations
/// @brief Field <Delete>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Delete_k__BackingField, put=setStaticF__Delete_k__BackingField)) ::System::Object*  _Delete_k__BackingField;

/// @brief Field <ServerTimestamp>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ServerTimestamp_k__BackingField, put=setStaticF__ServerTimestamp_k__BackingField)) ::System::Object*  _ServerTimestamp_k__BackingField;

/// @brief Method Increment, addr 0x191c46c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Object* Increment(int64_t  value) ;

static inline ::System::Object* getStaticF__Delete_k__BackingField() ;

static inline ::System::Object* getStaticF__ServerTimestamp_k__BackingField() ;

static inline void setStaticF__Delete_k__BackingField(::System::Object*  value) ;

static inline void setStaticF__ServerTimestamp_k__BackingField(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldValue(FieldValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldValue(FieldValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FieldValue, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FieldValue);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldValue*, "Firebase.Firestore", "FieldValue");
