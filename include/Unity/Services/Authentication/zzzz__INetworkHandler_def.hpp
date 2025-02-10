#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/INetworkHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(INetworkHandler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class INetworkHandler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::INetworkHandler);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.INetworkHandler
class CORDL_TYPE INetworkHandler {
public:
// Declarations
/// @brief Method PostAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method PostAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* PostAsync(::StringW  url, ::System::Object*  payload, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers) ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkHandler(INetworkHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::INetworkHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::INetworkHandler*, "Unity.Services.Authentication", "INetworkHandler");
