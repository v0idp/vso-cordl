#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Data/IDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDataGenerator)
namespace System {
struct DateTime;
}
namespace Unity::Services::Analytics::Data {
struct DataGenerator_SessionEndState;
}
namespace Unity::Services::Analytics::Data {
class StdCommonParams;
}
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
// Forward declare root types
namespace Unity::Services::Analytics::Data {
class IDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Data::IDataGenerator);
// Dependencies 
namespace Unity::Services::Analytics::Data {
// Is value type: false
// CS Name: Unity.Services.Analytics.Data.IDataGenerator
class CORDL_TYPE IDataGenerator {
public:
// Declarations
/// @brief Method GameEnded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GameEnded(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  quitState) ;

/// @brief Method GameRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GameRunning(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier) ;

/// @brief Method SetBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IDataGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataGenerator(IDataGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Data
NEED_NO_BOX(::Unity::Services::Analytics::Data::IDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Data::IDataGenerator*, "Unity.Services.Analytics.Data", "IDataGenerator");
