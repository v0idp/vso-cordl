#pragma once
// IWYU pragma private; include "VROSC/VideosPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideosPanelUI)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class PaginatedListDataHolder;
}
namespace VROSC {
class PaginatedList;
}
namespace VROSC {
struct VideosPanelUI__Awake_d__6;
}
// Forward declare root types
namespace VROSC {
class VideosPanelUI;
}
namespace VROSC {
struct VideosPanelUI__Awake_d__6;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideosPanelUI);
MARK_VAL_T(::VROSC::VideosPanelUI__Awake_d__6);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.VideosPanelUI/<Awake>d__6
struct CORDL_TYPE VideosPanelUI__Awake_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x177caa4, size 0x8bc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x177d360, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VideosPanelUI__Awake_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideosPanelUI>", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr VideosPanelUI__Awake_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::VideosPanelUI>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::VideosPanelUI>  __4__this;

/// @brief Field <request>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideosPanelUI__Awake_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI__Awake_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI__Awake_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI__Awake_d__6, _request_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI__Awake_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideosPanelUI__Awake_d__6, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideosPanelUI
class CORDL_TYPE VideosPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Awake_d__6 = ::VROSC::VideosPanelUI__Awake_d__6;

/// @brief Field _connectionErrorLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionErrorLabel, put=__cordl_internal_set__connectionErrorLabel)) ::UnityW<::UnityEngine::GameObject>  _connectionErrorLabel;

/// @brief Field _dataList, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataList, put=__cordl_internal_set__dataList)) ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  _dataList;

/// @brief Field _loadingIcon, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingIcon, put=__cordl_internal_set__loadingIcon)) ::UnityW<::UnityEngine::GameObject>  _loadingIcon;

/// @brief Field _noVideosErrorLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noVideosErrorLabel, put=__cordl_internal_set__noVideosErrorLabel)) ::UnityW<::UnityEngine::GameObject>  _noVideosErrorLabel;

/// @brief Field _paginatedList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__paginatedList, put=__cordl_internal_set__paginatedList)) ::UnityW<::VROSC::PaginatedList>  _paginatedList;

/// @brief Field _selectedDataHolder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedDataHolder, put=__cordl_internal_set__selectedDataHolder)) ::VROSC::PaginatedListDataHolder*  _selectedDataHolder;

/// @brief Method Awake, addr 0x177c484, size 0x8c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsVersionCompatible, addr 0x177c6c4, size 0x364, virtual false, abstract: false, final false
inline bool IsVersionCompatible(::StringW  requiredVersion, ::StringW  versionToCheck) ;

static inline ::VROSC::VideosPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x177c510, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method VideoButtonPressed, addr 0x177c5e8, size 0xc0, virtual false, abstract: false, final false
inline void VideoButtonPressed(::VROSC::PaginatedListDataHolder*  dataHolder) ;

/// @brief Method VideoPlayerClosed, addr 0x177c6a8, size 0x1c, virtual false, abstract: false, final false
inline void VideoPlayerClosed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__connectionErrorLabel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__connectionErrorLabel() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* const& __cordl_internal_get__dataList() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& __cordl_internal_get__dataList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noVideosErrorLabel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noVideosErrorLabel() ;

constexpr ::UnityW<::VROSC::PaginatedList> const& __cordl_internal_get__paginatedList() const;

constexpr ::UnityW<::VROSC::PaginatedList>& __cordl_internal_get__paginatedList() ;

constexpr ::VROSC::PaginatedListDataHolder* const& __cordl_internal_get__selectedDataHolder() const;

constexpr ::VROSC::PaginatedListDataHolder*& __cordl_internal_get__selectedDataHolder() ;

constexpr void __cordl_internal_set__connectionErrorLabel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dataList(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  value) ;

constexpr void __cordl_internal_set__loadingIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__noVideosErrorLabel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__paginatedList(::UnityW<::VROSC::PaginatedList>  value) ;

constexpr void __cordl_internal_set__selectedDataHolder(::VROSC::PaginatedListDataHolder*  value) ;

/// @brief Method .ctor, addr 0x177ca28, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideosPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideosPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideosPanelUI(VideosPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideosPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideosPanelUI(VideosPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1295};

/// @brief Field _loadingIcon, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadingIcon;

/// @brief Field _noVideosErrorLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____noVideosErrorLabel;

/// @brief Field _connectionErrorLabel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____connectionErrorLabel;

/// @brief Field _paginatedList, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::PaginatedList>  ____paginatedList;

/// @brief Field _dataList, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  ____dataList;

/// @brief Field _selectedDataHolder, offset: 0x48, size: 0x8, def value: None
 ::VROSC::PaginatedListDataHolder*  ____selectedDataHolder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideosPanelUI, ____loadingIcon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI, ____noVideosErrorLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI, ____connectionErrorLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI, ____paginatedList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI, ____dataList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideosPanelUI, ____selectedDataHolder) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideosPanelUI, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideosPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideosPanelUI*, "VROSC", "VideosPanelUI");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideosPanelUI__Awake_d__6, "VROSC", "VideosPanelUI/<Awake>d__6");
