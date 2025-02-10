#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/StreamingAssetsUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StreamingAssetsUtils)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class StreamingAssetsUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::StreamingAssetsUtils);
// Dependencies System.Object
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.StreamingAssetsUtils
class CORDL_TYPE StreamingAssetsUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetFileTextFromStreamingAssetsAsync, addr 0x2e9b560, size 0x98, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* GetFileTextFromStreamingAssetsAsync(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingAssetsUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingAssetsUtils(StreamingAssetsUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingAssetsUtils(StreamingAssetsUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::StreamingAssetsUtils, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::StreamingAssetsUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::StreamingAssetsUtils*, "Unity.Services.Core.Configuration", "StreamingAssetsUtils");
