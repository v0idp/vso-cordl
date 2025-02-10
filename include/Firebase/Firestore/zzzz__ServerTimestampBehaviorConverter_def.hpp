#pragma once
// IWYU pragma private; include "Firebase/Firestore/ServerTimestampBehaviorConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerTimestampBehaviorConverter)
namespace Firebase::Firestore {
struct DocumentSnapshotProxy_ServerTimestampBehavior;
}
namespace Firebase::Firestore {
struct ServerTimestampBehavior;
}
// Forward declare root types
namespace Firebase::Firestore {
class ServerTimestampBehaviorConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ServerTimestampBehaviorConverter);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ServerTimestampBehaviorConverter
class CORDL_TYPE ServerTimestampBehaviorConverter : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToProxy, addr 0x1919420, size 0x84, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior ConvertToProxy(::Firebase::Firestore::ServerTimestampBehavior  stb) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimestampBehaviorConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimestampBehaviorConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimestampBehaviorConverter(ServerTimestampBehaviorConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimestampBehaviorConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimestampBehaviorConverter(ServerTimestampBehaviorConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ServerTimestampBehaviorConverter, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ServerTimestampBehaviorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ServerTimestampBehaviorConverter*, "Firebase.Firestore", "ServerTimestampBehaviorConverter");
